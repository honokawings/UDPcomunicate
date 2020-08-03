#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QtNetwork/QHostAddress>
#include <QtNetwork/QUdpSocket>
#include <QtNetwork/QNetworkInterface>
#include <QDebug>
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QFileDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_pushButton_clear_clicked();

    void on_pushButton_send_clicked();

    void on_pushButton_store_clicked();

    void on_pushButton_display_clear_clicked();

    void on_pushButton_bind_toggled(bool checked);

private:
    Ui::Widget *ui;
    QUdpSocket *socket;
    QHostAddress ip_address;
    int tx_port,rx_port;
    int sent_count,rcv_count;
    QByteArray rcv_datagarm,send_datagarm;

    QHostAddress getHostIPV4Address();
    void rx_udp();

};
#endif // WIDGET_H
