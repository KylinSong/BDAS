/********************************************************************************
** Form generated from reading UI file 'bm9.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BM9_H
#define UI_BM9_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_bm9
{
public:
    QLabel *label;

    void setupUi(QWidget *bm9)
    {
        if (bm9->objectName().isEmpty())
            bm9->setObjectName("bm9");
        bm9->resize(521, 251);
        label = new QLabel(bm9);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 521, 251));
        label->setStyleSheet(QString::fromUtf8("border: 2px solid #505050;"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/data/\350\272\253\345\221\250\350\267\235\347\246\273\346\204\237\347\237\245\345\234\260\345\233\276.png")));
        label->setScaledContents(true);

        retranslateUi(bm9);

        QMetaObject::connectSlotsByName(bm9);
    } // setupUi

    void retranslateUi(QWidget *bm9)
    {
        bm9->setWindowTitle(QCoreApplication::translate("bm9", "Form", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class bm9: public Ui_bm9 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BM9_H
