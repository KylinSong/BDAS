#include "bm9.h"
#include "ui_bm9.h"

bm9::bm9(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::bm9)
{
    ui->setupUi(this);
}

bm9::~bm9()
{
    delete ui;
}
