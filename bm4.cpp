#include "bm4.h"
#include "ui_bm4.h"

bm4::bm4(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::bm4)
{
    ui->setupUi(this);
}

bm4::~bm4()
{
    delete ui;
}
