/********************************************************************************
** Form generated from reading UI file 'bm5.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BM5_H
#define UI_BM5_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_bm5
{
public:
    QLabel *label;

    void setupUi(QWidget *bm5)
    {
        if (bm5->objectName().isEmpty())
            bm5->setObjectName("bm5");
        bm5->resize(521, 251);
        label = new QLabel(bm5);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 521, 251));
        label->setStyleSheet(QString::fromUtf8("border: 2px solid #505050;"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/data/\344\277\241\345\217\267\345\217\257\350\276\276\346\200\247\345\234\260\345\233\276.png")));
        label->setScaledContents(true);

        retranslateUi(bm5);

        QMetaObject::connectSlotsByName(bm5);
    } // setupUi

    void retranslateUi(QWidget *bm5)
    {
        bm5->setWindowTitle(QCoreApplication::translate("bm5", "Form", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class bm5: public Ui_bm5 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BM5_H
