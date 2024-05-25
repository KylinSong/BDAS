#ifndef P1_LOGIN_H
#define P1_LOGIN_H
#include <QWidget>

namespace Ui {
class p1_login;
}

class p1_login : public QWidget
{
    Q_OBJECT
public:

    explicit p1_login(QWidget *parent = nullptr);
    ~p1_login();
    QString get_apikey();
private:

    Ui::p1_login *ui;

    void showMyDialog();
};

#endif // P1_LOGIN_H
