#ifndef P2_LOGIN_H
#define P2_LOGIN_H
#include <QWidget>
#include "pagejumper.h"


namespace Ui {
class p2_projects;
}

class p2_projects : public QWidget
{
    Q_OBJECT
public:
    static pagejumper* pageJumper;
    explicit p2_projects(QWidget *parent = nullptr);
    ~p2_projects();
private:
    int targetPage = 2;
    int targetPage2 = 0;
    Ui::p2_projects *ui;
    void sendPageJumpSignal();
    void goBack();
};

#endif // P1_LOGIN_H
