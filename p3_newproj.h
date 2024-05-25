#ifndef P3_NEWPROJ_H
#define P3_NEWPROJ_H

#include <QWidget>
#include "pagejumper.h"

namespace Ui {
class p3_newproj;
}

class p3_newproj : public QWidget
{
    Q_OBJECT
public:
    static pagejumper * pageJumper;
    explicit p3_newproj(QWidget *parent = nullptr);
    ~p3_newproj();

private:
    Ui::p3_newproj *ui;
    int targetPage = 3;
    int targetPage_back = 1;
    QString backgroundInfo = "";
    void sendPageJumpSignal();
    void goback();
    void saveBackgroundInfo();
};

#endif // P3_NEWPROJ_H
