#ifndef BM3_H
#define BM3_H

#include <QWidget>

namespace Ui {
class bm3;
}

class bm3 : public QWidget
{
    Q_OBJECT

public:
    explicit bm3(QWidget *parent = nullptr);
    ~bm3();

private:
    Ui::bm3 *ui;
};

#endif // BM3_H
