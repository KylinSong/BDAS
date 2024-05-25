#include "p2_projects.h"
#include "ui_p2_projects.h"
#include "pagejumper.h" // 确保包含pagejumper的声明
#include <QDebug>

p2_projects::p2_projects(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::p2_projects)
{
    ui->setupUi(this);
    // 正确地连接按钮点击信号到槽函数
    connect(this->ui->p2_pushButton_createNewProj,&QPushButton::clicked, this,&p2_projects::sendPageJumpSignal);
    connect(this->ui->p2_pushButton_goback,&QPushButton::clicked, this,&p2_projects::goBack);
}

void p2_projects::sendPageJumpSignal(){
    qDebug() << "点击按键被触发";
    // 通过pageJumper的单例调用pageJumpSender方法
    pagejumper::getInstance().pageJumpSender(targetPage);
}

void p2_projects::goBack(){
     qDebug() << "回退";
    pagejumper::getInstance().pageJumpSender(targetPage2);
}
p2_projects::~p2_projects()
{
    delete ui;
}
