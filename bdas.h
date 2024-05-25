#ifndef BDAS_H
#define BDAS_H

#include <QStackedWidget>
#include <QMainWindow>
#include <QString>



QT_BEGIN_NAMESPACE
namespace Ui {
class BDAS;
}
QT_END_NAMESPACE

class BDAS : public QMainWindow
{
    Q_OBJECT
    QStackedWidget *myStackedWidget;
public:
    QString api_key_in;
    BDAS(QWidget *parent = nullptr);
    int page_bodymap = 4;

    ~BDAS();
private slots:
    void pageJump(int targetPage);
    void gotoBodyMap();
signals:

private:
    Ui::BDAS *ui;
};
#endif // BDAS_H
