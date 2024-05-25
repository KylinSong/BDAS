/********************************************************************************
** Form generated from reading UI file 'bm6.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BM6_H
#define UI_BM6_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_bm6
{
public:
    QLabel *label;

    void setupUi(QWidget *bm6)
    {
        if (bm6->objectName().isEmpty())
            bm6->setObjectName("bm6");
        bm6->resize(521, 251);
        label = new QLabel(bm6);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 521, 251));
        label->setStyleSheet(QString::fromUtf8("border: 2px solid #505050;"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/data/\344\270\212\350\202\242\345\217\257\350\276\276\346\200\247\345\234\260\345\233\276.png")));
        label->setScaledContents(true);

        retranslateUi(bm6);

        QMetaObject::connectSlotsByName(bm6);
    } // setupUi

    void retranslateUi(QWidget *bm6)
    {
        bm6->setWindowTitle(QCoreApplication::translate("bm6", "Form", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class bm6: public Ui_bm6 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BM6_H
