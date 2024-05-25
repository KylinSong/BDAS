/********************************************************************************
** Form generated from reading UI file 'p6_chatbdas.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_P6_CHATBDAS_H
#define UI_P6_CHATBDAS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_p6_chatBDAS
{
public:
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton_search;
    QTextBrowser *p6_textBrowser_user;
    QTextBrowser *p6_textBrowser_bdas;
    QLabel *p6_icon_user;
    QLabel *p6_icon_bdas;
    QPushButton *p6_pushButton_exit;

    void setupUi(QWidget *p6_chatBDAS)
    {
        if (p6_chatBDAS->objectName().isEmpty())
            p6_chatBDAS->setObjectName("p6_chatBDAS");
        p6_chatBDAS->resize(850, 491);
        label = new QLabel(p6_chatBDAS);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 501, 16));
        lineEdit = new QLineEdit(p6_chatBDAS);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(20, 424, 741, 51));
        pushButton_search = new QPushButton(p6_chatBDAS);
        pushButton_search->setObjectName("pushButton_search");
        pushButton_search->setGeometry(QRect(770, 420, 71, 61));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/data/\345\217\221\351\200\201-\345\256\236\350\211\262.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_search->setIcon(icon);
        pushButton_search->setIconSize(QSize(30, 30));
        p6_textBrowser_user = new QTextBrowser(p6_chatBDAS);
        p6_textBrowser_user->setObjectName("p6_textBrowser_user");
        p6_textBrowser_user->setGeometry(QRect(110, 70, 631, 61));
        p6_textBrowser_bdas = new QTextBrowser(p6_chatBDAS);
        p6_textBrowser_bdas->setObjectName("p6_textBrowser_bdas");
        p6_textBrowser_bdas->setGeometry(QRect(110, 160, 631, 181));
        p6_icon_user = new QLabel(p6_chatBDAS);
        p6_icon_user->setObjectName("p6_icon_user");
        p6_icon_user->setGeometry(QRect(760, 70, 55, 55));
        p6_icon_user->setPixmap(QPixmap(QString::fromUtf8(":/images/data/\347\224\250\346\210\267 (1).png")));
        p6_icon_user->setScaledContents(true);
        p6_icon_bdas = new QLabel(p6_chatBDAS);
        p6_icon_bdas->setObjectName("p6_icon_bdas");
        p6_icon_bdas->setGeometry(QRect(30, 160, 55, 55));
        p6_icon_bdas->setPixmap(QPixmap(QString::fromUtf8(":/images/data/BDAS.png")));
        p6_icon_bdas->setScaledContents(true);
        p6_pushButton_exit = new QPushButton(p6_chatBDAS);
        p6_pushButton_exit->setObjectName("p6_pushButton_exit");
        p6_pushButton_exit->setGeometry(QRect(740, 10, 100, 32));

        retranslateUi(p6_chatBDAS);

        QMetaObject::connectSlotsByName(p6_chatBDAS);
    } // setupUi

    void retranslateUi(QWidget *p6_chatBDAS)
    {
        p6_chatBDAS->setWindowTitle(QCoreApplication::translate("p6_chatBDAS", "Form", nullptr));
        label->setText(QCoreApplication::translate("p6_chatBDAS", "chatBDAS", nullptr));
        pushButton_search->setText(QString());
        p6_icon_user->setText(QString());
        p6_icon_bdas->setText(QString());
        p6_pushButton_exit->setText(QCoreApplication::translate("p6_chatBDAS", "EXIT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class p6_chatBDAS: public Ui_p6_chatBDAS {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_P6_CHATBDAS_H
