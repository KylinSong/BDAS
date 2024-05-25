/********************************************************************************
** Form generated from reading UI file 'bm3.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BM3_H
#define UI_BM3_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_bm3
{
public:
    QLabel *label;

    void setupUi(QWidget *bm3)
    {
        if (bm3->objectName().isEmpty())
            bm3->setObjectName("bm3");
        bm3->resize(521, 251);
        label = new QLabel(bm3);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 521, 251));
        label->setStyleSheet(QString::fromUtf8("border: 2px solid #505050;"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/data/\346\270\251\350\247\211\350\272\253\344\275\223\345\234\260\345\233\276.png")));
        label->setScaledContents(true);

        retranslateUi(bm3);

        QMetaObject::connectSlotsByName(bm3);
    } // setupUi

    void retranslateUi(QWidget *bm3)
    {
        bm3->setWindowTitle(QCoreApplication::translate("bm3", "Form", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class bm3: public Ui_bm3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BM3_H
