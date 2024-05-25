/********************************************************************************
** Form generated from reading UI file 'p1_login.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_P1_LOGIN_H
#define UI_P1_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_p1_login
{
public:
    QPushButton *p1_pushbutton_comfirm;
    QLabel *label;
    QLineEdit *p1_textEdit_apikey;
    QLabel *label_3;
    QComboBox *comboBox;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_5;

    void setupUi(QWidget *p1_login)
    {
        if (p1_login->objectName().isEmpty())
            p1_login->setObjectName("p1_login");
        p1_login->resize(850, 491);
        p1_pushbutton_comfirm = new QPushButton(p1_login);
        p1_pushbutton_comfirm->setObjectName("p1_pushbutton_comfirm");
        p1_pushbutton_comfirm->setGeometry(QRect(370, 400, 100, 32));
        label = new QLabel(p1_login);
        label->setObjectName("label");
        label->setGeometry(QRect(110, 330, 58, 16));
        p1_textEdit_apikey = new QLineEdit(p1_login);
        p1_textEdit_apikey->setObjectName("p1_textEdit_apikey");
        p1_textEdit_apikey->setGeometry(QRect(180, 320, 461, 41));
        p1_textEdit_apikey->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(p1_login);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(70, 20, 691, 51));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/images/data/logo.png")));
        label_3->setScaledContents(true);
        comboBox = new QComboBox(p1_login);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(250, 270, 321, 32));
        label_2 = new QLabel(p1_login);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(200, 276, 58, 16));
        label_4 = new QLabel(p1_login);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(260, 150, 111, 71));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/images/data/BDAS.png")));
        label_4->setScaledContents(true);
        label_5 = new QLabel(p1_login);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(400, 160, 181, 61));
        QFont font;
        font.setFamilies({QString::fromUtf8("Linux Biolinum O")});
        font.setPointSize(48);
        label_5->setFont(font);

        retranslateUi(p1_login);

        QMetaObject::connectSlotsByName(p1_login);
    } // setupUi

    void retranslateUi(QWidget *p1_login)
    {
        p1_login->setWindowTitle(QCoreApplication::translate("p1_login", "Form", nullptr));
        p1_pushbutton_comfirm->setText(QCoreApplication::translate("p1_login", "confirm", nullptr));
        label->setText(QCoreApplication::translate("p1_login", "API key", nullptr));
        p1_textEdit_apikey->setText(QCoreApplication::translate("p1_login", "paste here", nullptr));
        label_3->setText(QString());
        comboBox->setItemText(0, QCoreApplication::translate("p1_login", "\350\257\267\351\200\211\346\213\251\346\202\250\346\213\245\346\234\211\347\232\204LLM\345\223\201\347\211\214\357\274\210\345\236\213\345\217\267\357\274\211", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("p1_login", "GPT3.5", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("p1_login", "GPT4", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("p1_login", "GPT4o", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("p1_login", "\346\226\207\345\277\203\344\270\200\350\250\200", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("p1_login", "\346\230\237\347\201\253", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("p1_login", "Kimi", nullptr));

        label_2->setText(QCoreApplication::translate("p1_login", "API\346\272\220", nullptr));
        label_4->setText(QString());
        label_5->setText(QCoreApplication::translate("p1_login", "B D A S", nullptr));
    } // retranslateUi

};

namespace Ui {
    class p1_login: public Ui_p1_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_P1_LOGIN_H
