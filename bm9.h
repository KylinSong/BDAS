#ifndef BM9_H
#define BM9_H

#include <QWidget>

namespace Ui {
class bm9;
}

class bm9 : public QWidget
{
    Q_OBJECT

public:
    explicit bm9(QWidget *parent = nullptr);
    ~bm9();

private:
    Ui::bm9 *ui;
};

#endif // BM9_H
