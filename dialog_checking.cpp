#include "dialog_checking.h"
#include "ui_dialog_checking.h"
#include <QTimer>
#include <QEventLoop>
#include <QMessageBox>
#include <QVBoxLayout>
#include <QLabel>
#include <QPixmap>

#include "pagejumper.h" // 确保包含pagejumper的声明

const int sleeptime = 5000;


dialog_checking::dialog_checking(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::dialog_checking)
{
    ui->setupUi(this);
    QTimer::singleShot(sleeptime, this, &dialog_checking::updateUI);
    pagejumper::getInstance().pageJumpSender(targetPage);

}

dialog_checking::~dialog_checking()
{
    delete ui;
}
void dialog_checking::updateUI(){
    QString Str = "api checked successfully";
    QPixmap pixmap(":/images/data/正确.png");
    ui->label_state->setText(Str);
    ui->label_state_pic->setPixmap(pixmap);
}

void dialog_checking::sendPageJumpSignal(){
    qDebug() << "点击按键被触发";
}
