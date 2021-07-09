  *
#include "widget.h"
#include "ui_widget.h"
#include <QUdpSocket>
#include <QByteArray>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    mSocket = new QUdpSocket(this);
    mSocket->bind(QHostAddress::LocalHost,ui->port->value());


}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_envoyer_clicked()
{
    auto Datagram = ui -> msj -> text().toLatin1();
    mSocket -> writeDatagram(Datagram, QHostAddress::LocalHost,
                             ui->port->value());
}


void Widget::on_Fermer_clicked()
{

    Widget::close();
}

