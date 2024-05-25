#ifndef BM_BASE_H
#define BM_BASE_H

#include <QWidget>

namespace Ui {
class bm_base;
}

class bm_base : public QWidget
{
    Q_OBJECT

public:
    explicit bm_base(QWidget *parent = nullptr);
    ~bm_base();

private:
    Ui::bm_base *ui;
};

#endif // BM_BASE_H
