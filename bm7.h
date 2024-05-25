#ifndef BM7_H
#define BM7_H

#include <QWidget>

namespace Ui {
class bm7;
}

class bm7 : public QWidget
{
    Q_OBJECT

public:
    explicit bm7(QWidget *parent = nullptr);
    ~bm7();

private:
    Ui::bm7 *ui;
};

#endif // BM7_H
