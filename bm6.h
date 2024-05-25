#ifndef BM6_H
#define BM6_H

#include <QWidget>

namespace Ui {
class bm6;
}

class bm6 : public QWidget
{
    Q_OBJECT

public:
    explicit bm6(QWidget *parent = nullptr);
    ~bm6();

private:
    Ui::bm6 *ui;
};

#endif // BM6_H
