#include "bm8.h"
#include "ui_bm8.h"

bm8::bm8(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::bm8)
{
    ui->setupUi(this);
}

bm8::~bm8()
{
    delete ui;
}
