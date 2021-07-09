 #ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
class QUdpSocket;
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_envoyer_clicked();

    void on_Fermer_clicked();

private:
    Ui::Widget *ui;
    QUdpSocket *mSocket;
};
#endif // WIDGET_H
