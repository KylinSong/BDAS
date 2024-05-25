/********************************************************************************
** Form generated from reading UI file 'p3_newproj.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_P3_NEWPROJ_H
#define UI_P3_NEWPROJ_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_p3_newproj
{
public:
    QTextEdit *p3_textEdit_DesignBackgroundInfo;
    QPushButton *pushButton;
    QLabel *label;
    QPushButton *p3_pushButton_goback;
    QLabel *label_2;
    QComboBox *comboBox;
    QLabel *label_3;
    QComboBox *comboBox_2;

    void setupUi(QWidget *p3_newproj)
    {
        if (p3_newproj->objectName().isEmpty())
            p3_newproj->setObjectName("p3_newproj");
        p3_newproj->resize(850, 491);
        p3_textEdit_DesignBackgroundInfo = new QTextEdit(p3_newproj);
        p3_textEdit_DesignBackgroundInfo->setObjectName("p3_textEdit_DesignBackgroundInfo");
        p3_textEdit_DesignBackgroundInfo->setGeometry(QRect(20, 70, 800, 291));
        pushButton = new QPushButton(p3_newproj);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(70, 430, 691, 41));
        label = new QLabel(p3_newproj);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 0, 191, 16));
        p3_pushButton_goback = new QPushButton(p3_newproj);
        p3_pushButton_goback->setObjectName("p3_pushButton_goback");
        p3_pushButton_goback->setGeometry(QRect(730, 0, 111, 31));
        label_2 = new QLabel(p3_newproj);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 387, 81, 16));
        comboBox = new QComboBox(p3_newproj);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(120, 380, 103, 32));
        label_3 = new QLabel(p3_newproj);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(630, 387, 58, 16));
        comboBox_2 = new QComboBox(p3_newproj);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName("comboBox_2");
        comboBox_2->setGeometry(QRect(720, 380, 103, 31));

        retranslateUi(p3_newproj);

        QMetaObject::connectSlotsByName(p3_newproj);
    } // setupUi

    void retranslateUi(QWidget *p3_newproj)
    {
        p3_newproj->setWindowTitle(QCoreApplication::translate("p3_newproj", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("p3_newproj", "Generate", nullptr));
        label->setText(QCoreApplication::translate("p3_newproj", "Design Background Information ", nullptr));
        p3_pushButton_goback->setText(QCoreApplication::translate("p3_newproj", "Exit", nullptr));
        label_2->setText(QCoreApplication::translate("p3_newproj", "\350\212\202\347\202\271\346\225\260\351\207\217\351\200\211\346\213\251", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("p3_newproj", "3", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("p3_newproj", "\350\207\252\345\256\232\344\271\211", nullptr));

        label_3->setText(QCoreApplication::translate("p3_newproj", "\346\270\251\345\272\246\350\256\276\347\275\256", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("p3_newproj", "70", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("p3_newproj", "\350\207\252\345\256\232\344\271\211", nullptr));

    } // retranslateUi

};

namespace Ui {
    class p3_newproj: public Ui_p3_newproj {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_P3_NEWPROJ_H
