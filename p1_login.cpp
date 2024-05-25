#include "p1_login.h"
#include "dialog_checking.h"
#include "ui_p1_login.h"
#include <QDebug>
#include <QTimer>
#include <QEventLoop>
#include <QMessageBox>
#include <QVBoxLayout>





const int sleeptime = 5000;

// 模拟非阻塞延时
inline void delay(int milliseconds) {
    QEventLoop loop;
    QTimer::singleShot(milliseconds, &loop, &QEventLoop::quit);
    loop.exec();
}



p1_login::p1_login(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::p1_login)
{
    ui->setupUi(this);
    // 正确地连接按钮点击信号到槽函数
    connect(ui->p1_pushbutton_comfirm, &QPushButton::clicked, this, &p1_login::showMyDialog);
}

QString p1_login::get_apikey(){
    return ui->p1_textEdit_apikey->text();
}



void p1_login::showMyDialog() {
    dialog_checking dialog(this);  // 创建对话框实例，使用 this 作为父窗体
    dialog.exec();  // 以模态方式运行对话框
}


p1_login::~p1_login()
{
    delete ui;
}

