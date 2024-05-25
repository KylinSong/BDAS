#include "bm_base.h"
#include "ui_bm_base.h"

bm_base::bm_base(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::bm_base)
{
    ui->setupUi(this);
}

bm_base::~bm_base()
{
    delete ui;
}
