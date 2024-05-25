#ifndef BM1_H
#define BM1_H

#include <QWidget>

namespace Ui {
class bm1;
}

class bm1 : public QWidget
{
    Q_OBJECT

public:
    explicit bm1(QWidget *parent = nullptr);
    ~bm1();

private:
    Ui::bm1 *ui;
};

#endif // BM1_H
