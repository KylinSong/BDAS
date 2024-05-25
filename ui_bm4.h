/********************************************************************************
** Form generated from reading UI file 'bm4.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BM4_H
#define UI_BM4_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_bm4
{
public:
    QLabel *label;

    void setupUi(QWidget *bm4)
    {
        if (bm4->objectName().isEmpty())
            bm4->setObjectName("bm4");
        bm4->resize(521, 251);
        label = new QLabel(bm4);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 521, 251));
        label->setStyleSheet(QString::fromUtf8("border: 2px solid #505050;"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/data/\350\247\206\350\247\211\345\217\257\350\276\276\346\200\247\345\234\260\345\233\276.png")));
        label->setScaledContents(true);

        retranslateUi(bm4);

        QMetaObject::connectSlotsByName(bm4);
    } // setupUi

    void retranslateUi(QWidget *bm4)
    {
        bm4->setWindowTitle(QCoreApplication::translate("bm4", "Form", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class bm4: public Ui_bm4 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BM4_H
