#ifndef P4_DOT_H
#define P4_DOT_H

#include <QWidget>
#include "pagejumper.h"

namespace Ui {
class p4_dot;
}

class p4_dot : public QWidget
{
    Q_OBJECT
public:
    explicit p4_dot(QWidget *parent = nullptr);
    ~p4_dot();

private:
    int targetPage_back = 2;
    Ui::p4_dot *ui;
    QString backgroundInfo = "";
    QTimer *delayTimer;
   // void sendPageJumpSignal();


public slots:
    void goback();
    void DoT();
    void A1();
    void A2();
    // void A3();
    // void A4();
    // void A5();
    // void A6();
    // void A7();
};

#endif // P4_DOT_H
