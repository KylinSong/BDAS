#include "bm1.h"
#include "ui_bm1.h"

bm1::bm1(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::bm1)
{
    ui->setupUi(this);
}

bm1::~bm1()
{
    delete ui;
}
