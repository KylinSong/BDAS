#ifndef P5_BODYMAP_H
#define P5_BODYMAP_H

#include <QWidget>

namespace Ui {
class p5_bodymap;
}

class p5_bodymap : public QWidget
{
    Q_OBJECT

public:
    explicit p5_bodymap(QWidget *parent = nullptr);
    ~p5_bodymap();

private:
    Ui::p5_bodymap *ui;
    int target_page = 0;
    int target_page_next = 5;
    void goto_map(int index);
    void goback();
    void gonext();
};

#endif // P5_BODYMAP_H
