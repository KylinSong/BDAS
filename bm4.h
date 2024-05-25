#ifndef BM4_H
#define BM4_H

#include <QWidget>

namespace Ui {
class bm4;
}

class bm4 : public QWidget
{
    Q_OBJECT

public:
    explicit bm4(QWidget *parent = nullptr);
    ~bm4();

private:
    Ui::bm4 *ui;
};

#endif // BM4_H
