/********************************************************************************
** Form generated from reading UI file 'bm7.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BM7_H
#define UI_BM7_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_bm7
{
public:
    QLabel *label;

    void setupUi(QWidget *bm7)
    {
        if (bm7->objectName().isEmpty())
            bm7->setObjectName("bm7");
        bm7->resize(521, 251);
        label = new QLabel(bm7);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 521, 251));
        label->setStyleSheet(QString::fromUtf8("border: 2px solid #505050;"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/data/\350\277\220\345\212\250\351\232\234\347\242\215\345\234\260\345\233\276.png")));
        label->setScaledContents(true);

        retranslateUi(bm7);

        QMetaObject::connectSlotsByName(bm7);
    } // setupUi

    void retranslateUi(QWidget *bm7)
    {
        bm7->setWindowTitle(QCoreApplication::translate("bm7", "Form", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class bm7: public Ui_bm7 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BM7_H
