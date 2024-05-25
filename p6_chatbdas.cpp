#include "p6_chatbdas.h"
#include "ui_p6_chatbdas.h"
#include <QDebug>
#include "pagejumper.h"

#include <QKeyEvent>



p6_chatBDAS::p6_chatBDAS(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::p6_chatBDAS)
{
    ui->setupUi(this);
    ui->p6_icon_bdas->hide();
    ui->p6_textBrowser_bdas->hide();
    infoBrowser();
    connect(ui->p6_pushButton_exit,&QPushButton::clicked, this, &p6_chatBDAS::goback);
    //connect(ui->pushButton_search,&QPushButton::clicked, this,&p6_chatBDAS::getans);
    setFocusPolicy(Qt::StrongFocus);
    setFocus();

}

p6_chatBDAS::~p6_chatBDAS()
{
    delete ui;
}

void p6_chatBDAS::goback(){
    qDebug()<<"go back to page 0 .";
    pagejumper::getInstance().pageJumpSender(page_exit);

}


void p6_chatBDAS::infoBrowser(){
    ui->p6_textBrowser_user->setText("我正在进行项目一的设计，考虑我的设计方案是个手套类型的装置，请你结合地图分析");
}

void p6_chatBDAS::getans(){
    ui->p6_icon_bdas->show();
    ui->p6_textBrowser_bdas->show();
    ui->p6_textBrowser_bdas->setText(ans);
}
void p6_chatBDAS::keyPressEvent(QKeyEvent *event) {
    if (event->key() == Qt::Key_Space) {
        getans();
    } else {
        QWidget::keyPressEvent(event);  // 确保其他键的默认处理
    }
}
