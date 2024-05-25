/********************************************************************************
** Form generated from reading UI file 'checkapi.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHECKAPI_H
#define UI_CHECKAPI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_checkapi
{
public:

    void setupUi(QWidget *checkapi)
    {
        if (checkapi->objectName().isEmpty())
            checkapi->setObjectName("checkapi");
        checkapi->resize(400, 300);

        retranslateUi(checkapi);

        QMetaObject::connectSlotsByName(checkapi);
    } // setupUi

    void retranslateUi(QWidget *checkapi)
    {
        checkapi->setWindowTitle(QCoreApplication::translate("checkapi", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class checkapi: public Ui_checkapi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECKAPI_H
