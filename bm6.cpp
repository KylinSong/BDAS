#include "bm6.h"
#include "ui_bm6.h"

bm6::bm6(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::bm6)
{
    ui->setupUi(this);
}

bm6::~bm6()
{
    delete ui;
}
