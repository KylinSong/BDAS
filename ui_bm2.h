/********************************************************************************
** Form generated from reading UI file 'bm2.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BM2_H
#define UI_BM2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_bm2
{
public:
    QLabel *label;

    void setupUi(QWidget *bm2)
    {
        if (bm2->objectName().isEmpty())
            bm2->setObjectName("bm2");
        bm2->resize(521, 251);
        label = new QLabel(bm2);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 521, 251));
        label->setStyleSheet(QString::fromUtf8("border: 2px solid #505050;"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/data/\350\242\253\345\212\250\350\247\246\350\247\211\345\234\260\345\233\276.png")));
        label->setScaledContents(true);

        retranslateUi(bm2);

        QMetaObject::connectSlotsByName(bm2);
    } // setupUi

    void retranslateUi(QWidget *bm2)
    {
        bm2->setWindowTitle(QCoreApplication::translate("bm2", "Form", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class bm2: public Ui_bm2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BM2_H
