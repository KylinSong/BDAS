/********************************************************************************
** Form generated from reading UI file 'bm_base.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BM_BASE_H
#define UI_BM_BASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_bm_base
{
public:
    QLabel *label;

    void setupUi(QWidget *bm_base)
    {
        if (bm_base->objectName().isEmpty())
            bm_base->setObjectName("bm_base");
        bm_base->resize(521, 251);
        label = new QLabel(bm_base);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 521, 251));
        label->setStyleSheet(QString::fromUtf8("background-color: #505050;\n"
"border: 2px solid #2B2B2B;"));
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(bm_base);

        QMetaObject::connectSlotsByName(bm_base);
    } // setupUi

    void retranslateUi(QWidget *bm_base)
    {
        bm_base->setWindowTitle(QCoreApplication::translate("bm_base", "Form", nullptr));
        label->setText(QCoreApplication::translate("bm_base", "\350\257\267\351\200\211\346\213\251\345\257\271\345\272\224\345\234\260\345\233\276", nullptr));
    } // retranslateUi

};

namespace Ui {
    class bm_base: public Ui_bm_base {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BM_BASE_H
