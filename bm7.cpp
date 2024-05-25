#include "bm7.h"
#include "ui_bm7.h"

bm7::bm7(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::bm7)
{
    ui->setupUi(this);
}

bm7::~bm7()
{
    delete ui;
}
