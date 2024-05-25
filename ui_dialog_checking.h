/********************************************************************************
** Form generated from reading UI file 'dialog_checking.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_CHECKING_H
#define UI_DIALOG_CHECKING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_dialog_checking
{
public:
    QLabel *label_state;
    QLabel *label_state_pic;

    void setupUi(QDialog *dialog_checking)
    {
        if (dialog_checking->objectName().isEmpty())
            dialog_checking->setObjectName("dialog_checking");
        dialog_checking->resize(400, 148);
        label_state = new QLabel(dialog_checking);
        label_state->setObjectName("label_state");
        label_state->setGeometry(QRect(150, 62, 161, 20));
        label_state_pic = new QLabel(dialog_checking);
        label_state_pic->setObjectName("label_state_pic");
        label_state_pic->setGeometry(QRect(110, 58, 31, 31));
        label_state_pic->setPixmap(QPixmap(QString::fromUtf8(":/images/data/\347\255\211\345\276\205.png")));
        label_state_pic->setScaledContents(true);

        retranslateUi(dialog_checking);

        QMetaObject::connectSlotsByName(dialog_checking);
    } // setupUi

    void retranslateUi(QDialog *dialog_checking)
    {
        dialog_checking->setWindowTitle(QCoreApplication::translate("dialog_checking", "Dialog", nullptr));
        label_state->setText(QCoreApplication::translate("dialog_checking", "checking now", nullptr));
        label_state_pic->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class dialog_checking: public Ui_dialog_checking {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_CHECKING_H
