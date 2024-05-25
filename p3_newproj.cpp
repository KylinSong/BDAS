#include "p3_newproj.h"
#include "ui_p3_newproj.h"
#include "pagejumper.h" // 确保包含pagejumper的声明
#include <QDebug>
#include <QPropertyAnimation>
#include <QCoreApplication>
#include <QFile>
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonObject>
#include <QDebug>
#include <unistd.h>


p3_newproj::p3_newproj(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::p3_newproj)
{
    ui->setupUi(this);
    connect(ui->pushButton, &QPushButton::clicked,this,& p3_newproj::sendPageJumpSignal);
    connect(ui->p3_pushButton_goback, &QPushButton::clicked,this,& p3_newproj::goback);
}

void p3_newproj::sendPageJumpSignal(){
    qDebug() << "点击按键被触发";
    backgroundInfo = ui->p3_textEdit_DesignBackgroundInfo->toPlainText();
    saveBackgroundInfo();
    // 通过pageJumper的单例调用pageJumpSender方法
    pagejumper::getInstance().pageJumpSender(targetPage);

}

void p3_newproj::goback(){
    qDebug() << "回退";
    // 通过pageJumper的单例调用pageJumpSender方法
    pagejumper::getInstance().pageJumpSender(targetPage_back);
}

void p3_newproj::saveBackgroundInfo()
{
    QFile file_json("/Users/kylinsong/BDAS3/search_his.json");
    QJsonArray search_his_json;
    if(file_json.open(QIODevice::ReadOnly)){
        QByteArray jsonData = file_json.readAll();
        QJsonDocument jsonDoc = QJsonDocument::fromJson(jsonData);
        if (!jsonDoc.isNull() && jsonDoc.isArray()) {
            search_his_json = jsonDoc.array();
        }
        file_json.close();
    }
    search_his_json.append(backgroundInfo);

    if (file_json.open(QIODevice::WriteOnly)) {
        QJsonDocument jsonDoc(search_his_json);
        file_json.write(jsonDoc.toJson());
        file_json.close();
        qDebug() << "已添加字符串并更新文件：" << backgroundInfo;
    } else {
        qDebug() << "无法打开文件以写入";
    }
}

p3_newproj::~p3_newproj()
{
    delete ui;
}

