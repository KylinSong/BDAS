#include "bm2.h"
#include "ui_bm2.h"

bm2::bm2(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::bm2)
{
    ui->setupUi(this);
}

bm2::~bm2()
{
    delete ui;
}
