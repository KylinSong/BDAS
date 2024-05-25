#ifndef BM2_H
#define BM2_H

#include <QWidget>

namespace Ui {
class bm2;
}

class bm2 : public QWidget
{
    Q_OBJECT

public:
    explicit bm2(QWidget *parent = nullptr);
    ~bm2();

private:
    Ui::bm2 *ui;
};

#endif // BM2_H
