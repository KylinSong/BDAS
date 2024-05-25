#include "bdas.h"
#include "./ui_bdas.h"
#include <QProcess>
#include "p1_login.h"
#include "p2_projects.h"
#include "p3_newproj.h"
#include "p4_dot.h"
#include "p5_bodymap.h"
#include "p6_chatbdas.h"
#include "pagejumper.h"
#include <QMenuBar>
#include <QMenu>


BDAS::BDAS(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::BDAS)
{
    ui->setupUi(this);



    //调节容器（祖宗）的尺寸变化策略
    ui->myStackedWidget->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    //添加所有的页面
    auto p1 = new p1_login;
    auto p2 = new p2_projects;
    auto p3 = new p3_newproj;
    auto p4 = new p4_dot;
    auto p5 = new p5_bodymap;
    auto p6 = new p6_chatBDAS;
    ui->myStackedWidget->addWidget(p1);
    ui->myStackedWidget->addWidget(p2);
    ui->myStackedWidget->addWidget(p3);
    ui->myStackedWidget->addWidget(p4);
    ui->myStackedWidget->addWidget(p5);
    ui->myStackedWidget->addWidget(p6);


    ui->myStackedWidget->setCurrentIndex(0);
    // 页面跳转统一发射信号
    // getInstance()单例模式，如果未初始化则初始化，如果已经初始化直接返回
    connect(&pagejumper::getInstance(), &pagejumper::jumpRequested,
            this, &BDAS::pageJump);

    // 这里写manuBar的初始化
    QAction * actionOpenBodyMap = new QAction(tr("Body Map"),this);
    ui->menuhuman_factor_design->addAction(actionOpenBodyMap);
    connect(actionOpenBodyMap, &QAction::triggered, this, &BDAS::gotoBodyMap);

}

void BDAS::pageJump(int targetPage){
    ui->myStackedWidget->setCurrentIndex(targetPage);
}

void BDAS::gotoBodyMap(){
    qDebug() << "menuBar被触发";
    // 通过pageJumper的单例调用pageJumpSender方法
    pagejumper::getInstance().pageJumpSender(page_bodymap);
}


BDAS::~BDAS()
{
    delete ui;
}


