#ifndef BM8_H
#define BM8_H

#include <QWidget>

namespace Ui {
class bm8;
}

class bm8 : public QWidget
{
    Q_OBJECT

public:
    explicit bm8(QWidget *parent = nullptr);
    ~bm8();

private:
    Ui::bm8 *ui;
};

#endif // BM8_H
