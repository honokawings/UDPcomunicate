#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    sent_count=0;
    rcv_count=0;

    ui->lineEdit_ip_server->setPlaceholderText("Input your remote IP address");
    ui->textEdit_send_edit->setPlaceholderText("Input your message");//提示文字

    ui->pushButton_bind->setStyleSheet("background-color: rgb(255,153,153)");//blind按键初始颜色

    ui->lineEdit_ip_client->setText(getHostIPV4Address().toString());//读取本地ip
    ui->lineEdit_ip_client->setReadOnly(true);//显示框只读
    ui->textEdit_send_display->setReadOnly(true);
    ui->textEdit_rcv_display->setReadOnly(true);

    socket=new QUdpSocket(this);
    ui->textBrowser_sent_count->setText(QString::number(sent_count,10));
    ui->textBrowser_rcv_count->setText(QString::number(rcv_count,10));//设置字节计数清零
}

Widget::~Widget()
{
    delete ui;
}

void Widget::rx_udp()//UDP接收函数
{
    while(socket->hasPendingDatagrams())
    {
        rcv_datagarm.resize(socket->pendingDatagramSize());//根据接收信息重设接收缓存长度

        QHostAddress src_address;//Socket消息接受并显示
        socket->readDatagram(rcv_datagarm.data(),rcv_datagarm.size(),&src_address);
        ui->textEdit_rcv_display->append(QString(rcv_datagarm));

        rcv_count+=send_datagarm.size();//接收字节计数
        ui->textBrowser_rcv_count->setText(QString::number(rcv_count,10));
    }
}

void Widget::on_pushButton_clear_clicked()//字节计数框清零
{
    sent_count=0;
    rcv_count=0;
    ui->textBrowser_sent_count->setText(QString::number(sent_count,10));
    ui->textBrowser_rcv_count->setText(QString::number(rcv_count,10));
}

void Widget::on_pushButton_display_clear_clicked()//接收-发送显示框清空
{
    ui->textEdit_send_display->clear();
    ui->textEdit_rcv_display->clear();
}

void Widget::on_pushButton_send_clicked()//UDP发送按键功能
{
    ip_address=QHostAddress(ui->lineEdit_ip_server->text());//提取输入框的IP和端口
    tx_port=ui->lineEdit_port_server->text().toInt();

    send_datagarm=ui->textEdit_send_edit->toPlainText().toLatin1();//提取编辑框需要发送的信息
    ui->textEdit_send_display->append(send_datagarm);
    socket->writeDatagram(send_datagarm.data(),send_datagarm.size(),ip_address,tx_port);//socket发送

    sent_count+=send_datagarm.size();//发送字节计数
    ui->textBrowser_sent_count->setText(QString::number(sent_count,10));

    ui->textEdit_send_edit->selectAll();//全选编辑框内容并移动焦点，便于再次编辑
    ui->textEdit_send_edit->setFocus();
}



void Widget::on_pushButton_store_clicked()//接收显示框转换为文件储存
{
    //选取文件路径和命名文件
    QString textFile = QFileDialog::getSaveFileName(this,tr("Save txt"),"",tr("text (*.txt)"));

    QFile file(textFile);//建立txt文件
    if (!file.open(QFile::WriteOnly | QFile::Text))
    {
        QMessageBox::information(this, "Error Message", "Please Select a Text File!");
        return;
    }
    QTextStream out(&file); //分行写入文件
    out << ui->textEdit_rcv_display->toPlainText();
}

QHostAddress Widget::getHostIPV4Address()//排除环回地址
{
    foreach(const QHostAddress &hostAddress,QNetworkInterface::allAddresses())
        if ( hostAddress != QHostAddress::LocalHost && hostAddress.toIPv4Address() )
            return hostAddress;
    return QHostAddress::LocalHost;
}


void Widget::on_pushButton_bind_toggled(bool checked)//blind按键功能
{
    if(checked)//按下时显示绿色，并且锁定监听端口编辑框,进行端口绑定和监听
    {
        ui->lineEdit_port_client->setReadOnly(true);
        ui->pushButton_bind->setStyleSheet("background-color: rgb(153,255,153)");

        rx_port=ui->lineEdit_port_client->text().toInt();
        socket->bind(QHostAddress::Any,rx_port);
        connect(socket,&QUdpSocket::readyRead,this,&Widget::rx_udp);
    }
    else//释放时显示红色，解除编辑框锁定，关闭socket连接
    {
        socket->close();
        ui->lineEdit_port_client->setReadOnly(false);
        ui->pushButton_bind->setStyleSheet("background-color: rgb(255,153,153)");
    }
}
