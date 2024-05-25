/********************************************************************************
** Form generated from reading UI file 'bm1.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BM1_H
#define UI_BM1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_bm1
{
public:
    QLabel *label;

    void setupUi(QWidget *bm1)
    {
        if (bm1->objectName().isEmpty())
            bm1->setObjectName("bm1");
        bm1->resize(521, 251);
        label = new QLabel(bm1);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 521, 251));
        label->setStyleSheet(QString::fromUtf8("border: 2px solid #505050;"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/data/\344\270\273\345\212\250\350\247\246\350\247\211\345\234\260\345\233\276.png")));
        label->setScaledContents(true);

        retranslateUi(bm1);

        QMetaObject::connectSlotsByName(bm1);
    } // setupUi

    void retranslateUi(QWidget *bm1)
    {
        bm1->setWindowTitle(QCoreApplication::translate("bm1", "Form", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class bm1: public Ui_bm1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BM1_H
