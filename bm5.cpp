#include "bm5.h"
#include "ui_bm5.h"

bm5::bm5(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::bm5)
{
    ui->setupUi(this);
}

bm5::~bm5()
{
    delete ui;
}
