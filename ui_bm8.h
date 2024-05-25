/********************************************************************************
** Form generated from reading UI file 'bm8.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BM8_H
#define UI_BM8_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_bm8
{
public:
    QLabel *label;

    void setupUi(QWidget *bm8)
    {
        if (bm8->objectName().isEmpty())
            bm8->setObjectName("bm8");
        bm8->resize(521, 251);
        label = new QLabel(bm8);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 521, 251));
        label->setStyleSheet(QString::fromUtf8("border: 2px solid #505050;"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/data/\350\264\237\350\215\267\345\234\260\345\233\276.png")));
        label->setScaledContents(true);

        retranslateUi(bm8);

        QMetaObject::connectSlotsByName(bm8);
    } // setupUi

    void retranslateUi(QWidget *bm8)
    {
        bm8->setWindowTitle(QCoreApplication::translate("bm8", "Form", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class bm8: public Ui_bm8 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BM8_H
