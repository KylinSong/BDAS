#ifndef BM5_H
#define BM5_H

#include <QWidget>

namespace Ui {
class bm5;
}

class bm5 : public QWidget
{
    Q_OBJECT

public:
    explicit bm5(QWidget *parent = nullptr);
    ~bm5();

private:
    Ui::bm5 *ui;
};

#endif // BM5_H
