/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_address_server;
    QHBoxLayout *horizontalLayout_ip_server;
    QLabel *label_ip_server;
    QLineEdit *lineEdit_ip_server;
    QHBoxLayout *horizontalLayout_port_server;
    QLabel *label_port_server;
    QLineEdit *lineEdit_port_server;
    QHBoxLayout *horizontalLayout_address_client;
    QHBoxLayout *horizontalLayout_ip_client;
    QLabel *label_ip_client;
    QLineEdit *lineEdit_ip_client;
    QHBoxLayout *horizontalLayout_port_client;
    QLabel *label_port_client;
    QLineEdit *lineEdit_port_client;
    QPushButton *pushButton_bind;
    QSplitter *splitter_display;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_send_display;
    QLabel *label_send_display;
    QTextEdit *textEdit_send_display;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_rcv_display;
    QLabel *label_rcv_display;
    QTextEdit *textEdit_rcv_display;
    QHBoxLayout *horizontalLayout_ctl;
    QHBoxLayout *horizontalLayout_send_edit;
    QVBoxLayout *verticalLayout_send;
    QPushButton *pushButton_send;
    QPushButton *pushButton_store;
    QPushButton *pushButton_display_clear;
    QTextEdit *textEdit_send_edit;
    QVBoxLayout *verticalLayout_count;
    QHBoxLayout *horizontalLayout_sent_count;
    QLabel *label_sent_count;
    QTextBrowser *textBrowser_sent_count;
    QHBoxLayout *horizontalLayout_rcv_count;
    QLabel *label_rcv_count;
    QTextBrowser *textBrowser_rcv_count;
    QPushButton *pushButton_clear;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(848, 497);
        QFont font;
        font.setFamily(QString::fromUtf8("Consolas"));
        font.setPointSize(11);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        Widget->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8("item_icon_09.ico"), QSize(), QIcon::Normal, QIcon::Off);
        Widget->setWindowIcon(icon);
        horizontalLayout = new QHBoxLayout(Widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_address_server = new QHBoxLayout();
        horizontalLayout_address_server->setObjectName(QString::fromUtf8("horizontalLayout_address_server"));
        horizontalLayout_ip_server = new QHBoxLayout();
        horizontalLayout_ip_server->setObjectName(QString::fromUtf8("horizontalLayout_ip_server"));
        label_ip_server = new QLabel(Widget);
        label_ip_server->setObjectName(QString::fromUtf8("label_ip_server"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_ip_server->sizePolicy().hasHeightForWidth());
        label_ip_server->setSizePolicy(sizePolicy);
        label_ip_server->setMinimumSize(QSize(180, 0));

        horizontalLayout_ip_server->addWidget(label_ip_server);

        lineEdit_ip_server = new QLineEdit(Widget);
        lineEdit_ip_server->setObjectName(QString::fromUtf8("lineEdit_ip_server"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Consolas"));
        font1.setPointSize(9);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        lineEdit_ip_server->setFont(font1);

        horizontalLayout_ip_server->addWidget(lineEdit_ip_server);

        horizontalLayout_ip_server->setStretch(0, 2);
        horizontalLayout_ip_server->setStretch(1, 8);

        horizontalLayout_address_server->addLayout(horizontalLayout_ip_server);

        horizontalLayout_port_server = new QHBoxLayout();
        horizontalLayout_port_server->setObjectName(QString::fromUtf8("horizontalLayout_port_server"));
        label_port_server = new QLabel(Widget);
        label_port_server->setObjectName(QString::fromUtf8("label_port_server"));

        horizontalLayout_port_server->addWidget(label_port_server);

        lineEdit_port_server = new QLineEdit(Widget);
        lineEdit_port_server->setObjectName(QString::fromUtf8("lineEdit_port_server"));

        horizontalLayout_port_server->addWidget(lineEdit_port_server);


        horizontalLayout_address_server->addLayout(horizontalLayout_port_server);

        horizontalLayout_address_server->setStretch(0, 7);
        horizontalLayout_address_server->setStretch(1, 3);

        verticalLayout->addLayout(horizontalLayout_address_server);

        horizontalLayout_address_client = new QHBoxLayout();
        horizontalLayout_address_client->setObjectName(QString::fromUtf8("horizontalLayout_address_client"));
        horizontalLayout_ip_client = new QHBoxLayout();
        horizontalLayout_ip_client->setObjectName(QString::fromUtf8("horizontalLayout_ip_client"));
        label_ip_client = new QLabel(Widget);
        label_ip_client->setObjectName(QString::fromUtf8("label_ip_client"));
        sizePolicy.setHeightForWidth(label_ip_client->sizePolicy().hasHeightForWidth());
        label_ip_client->setSizePolicy(sizePolicy);
        label_ip_client->setMinimumSize(QSize(180, 0));

        horizontalLayout_ip_client->addWidget(label_ip_client);

        lineEdit_ip_client = new QLineEdit(Widget);
        lineEdit_ip_client->setObjectName(QString::fromUtf8("lineEdit_ip_client"));
        lineEdit_ip_client->setFont(font1);

        horizontalLayout_ip_client->addWidget(lineEdit_ip_client);

        horizontalLayout_ip_client->setStretch(0, 2);
        horizontalLayout_ip_client->setStretch(1, 8);

        horizontalLayout_address_client->addLayout(horizontalLayout_ip_client);

        horizontalLayout_port_client = new QHBoxLayout();
        horizontalLayout_port_client->setObjectName(QString::fromUtf8("horizontalLayout_port_client"));
        label_port_client = new QLabel(Widget);
        label_port_client->setObjectName(QString::fromUtf8("label_port_client"));

        horizontalLayout_port_client->addWidget(label_port_client);

        lineEdit_port_client = new QLineEdit(Widget);
        lineEdit_port_client->setObjectName(QString::fromUtf8("lineEdit_port_client"));

        horizontalLayout_port_client->addWidget(lineEdit_port_client);

        pushButton_bind = new QPushButton(Widget);
        pushButton_bind->setObjectName(QString::fromUtf8("pushButton_bind"));
        pushButton_bind->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_bind->sizePolicy().hasHeightForWidth());
        pushButton_bind->setSizePolicy(sizePolicy1);
        pushButton_bind->setMinimumSize(QSize(0, 0));
        pushButton_bind->setMaximumSize(QSize(60, 16777215));
        pushButton_bind->setCheckable(true);
        pushButton_bind->setChecked(false);
        pushButton_bind->setAutoRepeat(false);
        pushButton_bind->setAutoExclusive(false);

        horizontalLayout_port_client->addWidget(pushButton_bind);


        horizontalLayout_address_client->addLayout(horizontalLayout_port_client);

        horizontalLayout_address_client->setStretch(0, 7);
        horizontalLayout_address_client->setStretch(1, 3);

        verticalLayout->addLayout(horizontalLayout_address_client);

        splitter_display = new QSplitter(Widget);
        splitter_display->setObjectName(QString::fromUtf8("splitter_display"));
        splitter_display->setOrientation(Qt::Horizontal);
        layoutWidget = new QWidget(splitter_display);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        verticalLayout_send_display = new QVBoxLayout(layoutWidget);
        verticalLayout_send_display->setObjectName(QString::fromUtf8("verticalLayout_send_display"));
        verticalLayout_send_display->setContentsMargins(0, 0, 0, 0);
        label_send_display = new QLabel(layoutWidget);
        label_send_display->setObjectName(QString::fromUtf8("label_send_display"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_send_display->sizePolicy().hasHeightForWidth());
        label_send_display->setSizePolicy(sizePolicy2);
        label_send_display->setScaledContents(false);
        label_send_display->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_send_display->addWidget(label_send_display);

        textEdit_send_display = new QTextEdit(layoutWidget);
        textEdit_send_display->setObjectName(QString::fromUtf8("textEdit_send_display"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Consolas"));
        font2.setPointSize(10);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        textEdit_send_display->setFont(font2);

        verticalLayout_send_display->addWidget(textEdit_send_display);

        splitter_display->addWidget(layoutWidget);
        layoutWidget1 = new QWidget(splitter_display);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        verticalLayout_rcv_display = new QVBoxLayout(layoutWidget1);
        verticalLayout_rcv_display->setObjectName(QString::fromUtf8("verticalLayout_rcv_display"));
        verticalLayout_rcv_display->setContentsMargins(0, 0, 0, 0);
        label_rcv_display = new QLabel(layoutWidget1);
        label_rcv_display->setObjectName(QString::fromUtf8("label_rcv_display"));

        verticalLayout_rcv_display->addWidget(label_rcv_display);

        textEdit_rcv_display = new QTextEdit(layoutWidget1);
        textEdit_rcv_display->setObjectName(QString::fromUtf8("textEdit_rcv_display"));

        verticalLayout_rcv_display->addWidget(textEdit_rcv_display);

        splitter_display->addWidget(layoutWidget1);

        verticalLayout->addWidget(splitter_display);

        horizontalLayout_ctl = new QHBoxLayout();
        horizontalLayout_ctl->setSpacing(5);
        horizontalLayout_ctl->setObjectName(QString::fromUtf8("horizontalLayout_ctl"));
        horizontalLayout_ctl->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout_send_edit = new QHBoxLayout();
        horizontalLayout_send_edit->setObjectName(QString::fromUtf8("horizontalLayout_send_edit"));
        horizontalLayout_send_edit->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout_send_edit->setContentsMargins(0, -1, -1, -1);
        verticalLayout_send = new QVBoxLayout();
        verticalLayout_send->setSpacing(0);
        verticalLayout_send->setObjectName(QString::fromUtf8("verticalLayout_send"));
        pushButton_send = new QPushButton(Widget);
        pushButton_send->setObjectName(QString::fromUtf8("pushButton_send"));

        verticalLayout_send->addWidget(pushButton_send);

        pushButton_store = new QPushButton(Widget);
        pushButton_store->setObjectName(QString::fromUtf8("pushButton_store"));

        verticalLayout_send->addWidget(pushButton_store);

        pushButton_display_clear = new QPushButton(Widget);
        pushButton_display_clear->setObjectName(QString::fromUtf8("pushButton_display_clear"));

        verticalLayout_send->addWidget(pushButton_display_clear);

        verticalLayout_send->setStretch(0, 1);
        verticalLayout_send->setStretch(1, 1);

        horizontalLayout_send_edit->addLayout(verticalLayout_send);

        textEdit_send_edit = new QTextEdit(Widget);
        textEdit_send_edit->setObjectName(QString::fromUtf8("textEdit_send_edit"));

        horizontalLayout_send_edit->addWidget(textEdit_send_edit);


        horizontalLayout_ctl->addLayout(horizontalLayout_send_edit);

        verticalLayout_count = new QVBoxLayout();
        verticalLayout_count->setSpacing(5);
        verticalLayout_count->setObjectName(QString::fromUtf8("verticalLayout_count"));
        horizontalLayout_sent_count = new QHBoxLayout();
        horizontalLayout_sent_count->setObjectName(QString::fromUtf8("horizontalLayout_sent_count"));
        label_sent_count = new QLabel(Widget);
        label_sent_count->setObjectName(QString::fromUtf8("label_sent_count"));

        horizontalLayout_sent_count->addWidget(label_sent_count);

        textBrowser_sent_count = new QTextBrowser(Widget);
        textBrowser_sent_count->setObjectName(QString::fromUtf8("textBrowser_sent_count"));
        textBrowser_sent_count->setEnabled(true);
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(textBrowser_sent_count->sizePolicy().hasHeightForWidth());
        textBrowser_sent_count->setSizePolicy(sizePolicy3);
        textBrowser_sent_count->setMaximumSize(QSize(16777215, 28));

        horizontalLayout_sent_count->addWidget(textBrowser_sent_count);

        horizontalLayout_sent_count->setStretch(0, 1);
        horizontalLayout_sent_count->setStretch(1, 1);

        verticalLayout_count->addLayout(horizontalLayout_sent_count);

        horizontalLayout_rcv_count = new QHBoxLayout();
        horizontalLayout_rcv_count->setObjectName(QString::fromUtf8("horizontalLayout_rcv_count"));
        label_rcv_count = new QLabel(Widget);
        label_rcv_count->setObjectName(QString::fromUtf8("label_rcv_count"));
        label_rcv_count->setEnabled(true);

        horizontalLayout_rcv_count->addWidget(label_rcv_count);

        textBrowser_rcv_count = new QTextBrowser(Widget);
        textBrowser_rcv_count->setObjectName(QString::fromUtf8("textBrowser_rcv_count"));
        sizePolicy3.setHeightForWidth(textBrowser_rcv_count->sizePolicy().hasHeightForWidth());
        textBrowser_rcv_count->setSizePolicy(sizePolicy3);
        textBrowser_rcv_count->setMaximumSize(QSize(16777215, 28));

        horizontalLayout_rcv_count->addWidget(textBrowser_rcv_count);

        horizontalLayout_rcv_count->setStretch(0, 1);
        horizontalLayout_rcv_count->setStretch(1, 1);

        verticalLayout_count->addLayout(horizontalLayout_rcv_count);

        pushButton_clear = new QPushButton(Widget);
        pushButton_clear->setObjectName(QString::fromUtf8("pushButton_clear"));

        verticalLayout_count->addWidget(pushButton_clear);

        verticalLayout_count->setStretch(0, 1);
        verticalLayout_count->setStretch(1, 1);
        verticalLayout_count->setStretch(2, 1);

        horizontalLayout_ctl->addLayout(verticalLayout_count);

        horizontalLayout_ctl->setStretch(0, 5);
        horizontalLayout_ctl->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_ctl);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(2, 8);
        verticalLayout->setStretch(3, 1);

        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "UDPcomunication", nullptr));
        label_ip_server->setText(QCoreApplication::translate("Widget", "Server-IP address:", nullptr));
        label_port_server->setText(QCoreApplication::translate("Widget", "Port:", nullptr));
        label_ip_client->setText(QCoreApplication::translate("Widget", "Client-IP address:", nullptr));
        label_port_client->setText(QCoreApplication::translate("Widget", "Port:", nullptr));
        pushButton_bind->setText(QCoreApplication::translate("Widget", "Blind", nullptr));
        label_send_display->setText(QCoreApplication::translate("Widget", "Send:", nullptr));
        label_rcv_display->setText(QCoreApplication::translate("Widget", "Receive:", nullptr));
        pushButton_send->setText(QCoreApplication::translate("Widget", "Send", nullptr));
        pushButton_store->setText(QCoreApplication::translate("Widget", "Store", nullptr));
        pushButton_display_clear->setText(QCoreApplication::translate("Widget", "Clear", nullptr));
        label_sent_count->setText(QCoreApplication::translate("Widget", "Sent:", nullptr));
        label_rcv_count->setText(QCoreApplication::translate("Widget", "Received:", nullptr));
        pushButton_clear->setText(QCoreApplication::translate("Widget", "Clear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
