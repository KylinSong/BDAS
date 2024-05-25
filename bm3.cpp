#include "bm3.h"
#include "ui_bm3.h"

bm3::bm3(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::bm3)
{
    ui->setupUi(this);
}

bm3::~bm3()
{
    delete ui;
}
