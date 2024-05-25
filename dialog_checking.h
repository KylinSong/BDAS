#ifndef DIALOG_CHECKING_H
#define DIALOG_CHECKING_H
#include <pagejumper.h>

#include <QDialog>

namespace Ui {
class dialog_checking;
}

class dialog_checking : public QDialog
{
    Q_OBJECT

public:
    static pagejumper* pageJumper;
    explicit dialog_checking(QWidget *parent = nullptr);
    ~dialog_checking();

private:
    Ui::dialog_checking *ui;
    int targetPage = 1;
    void sendPageJumpSignal();
    void updateUI();
};

#endif // DIALOG_CHECKING_H
