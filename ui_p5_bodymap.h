/********************************************************************************
** Form generated from reading UI file 'p5_bodymap.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_P5_BODYMAP_H
#define UI_P5_BODYMAP_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_p5_bodymap
{
public:
    QComboBox *comboBox;
    QPushButton *pushButton;
    QStackedWidget *p5_stackedWidget_bodymaps;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *ai_logo_body_map;
    QTextBrowser *textBrowser_Details;
    QTextBrowser *textBrowser_reference;
    QLabel *label_11;
    QLineEdit *lineEdit;
    QTextBrowser *textBrowser_purpose;
    QTextBrowser *textBrowser_implementation;
    QTextBrowser *textBrowser_Principle;
    QTextBrowser *textBrowser_bodypart;
    QTextBrowser *textBrowser_name;
    QPushButton *pushButton_gosearch;

    void setupUi(QWidget *p5_bodymap)
    {
        if (p5_bodymap->objectName().isEmpty())
            p5_bodymap->setObjectName("p5_bodymap");
        p5_bodymap->resize(850, 491);
        comboBox = new QComboBox(p5_bodymap);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(30, 40, 631, 32));
        pushButton = new QPushButton(p5_bodymap);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(710, 40, 100, 32));
        p5_stackedWidget_bodymaps = new QStackedWidget(p5_bodymap);
        p5_stackedWidget_bodymaps->setObjectName("p5_stackedWidget_bodymaps");
        p5_stackedWidget_bodymaps->setGeometry(QRect(30, 110, 521, 251));
        label_2 = new QLabel(p5_bodymap);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(560, 80, 221, 21));
        QFont font;
        font.setFamilies({QString::fromUtf8("Academy Engraved LET")});
        font.setPointSize(18);
        label_2->setFont(font);
        label_3 = new QLabel(p5_bodymap);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(560, 110, 58, 16));
        label_4 = new QLabel(p5_bodymap);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(560, 140, 58, 16));
        label_5 = new QLabel(p5_bodymap);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(560, 170, 101, 16));
        label_6 = new QLabel(p5_bodymap);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(560, 200, 121, 16));
        label_7 = new QLabel(p5_bodymap);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(560, 230, 121, 16));
        label_8 = new QLabel(p5_bodymap);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(560, 250, 121, 16));
        label_9 = new QLabel(p5_bodymap);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(560, 330, 71, 16));
        ai_logo_body_map = new QLabel(p5_bodymap);
        ai_logo_body_map->setObjectName("ai_logo_body_map");
        ai_logo_body_map->setGeometry(QRect(20, 380, 31, 31));
        ai_logo_body_map->setPixmap(QPixmap(QString::fromUtf8(":/data/ai_bodymap_logo.png")));
        ai_logo_body_map->setScaledContents(true);
        textBrowser_Details = new QTextBrowser(p5_bodymap);
        textBrowser_Details->setObjectName("textBrowser_Details");
        textBrowser_Details->setGeometry(QRect(560, 270, 271, 61));
        textBrowser_reference = new QTextBrowser(p5_bodymap);
        textBrowser_reference->setObjectName("textBrowser_reference");
        textBrowser_reference->setGeometry(QRect(560, 350, 271, 61));
        label_11 = new QLabel(p5_bodymap);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(70, 390, 121, 16));
        lineEdit = new QLineEdit(p5_bodymap);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(20, 420, 731, 61));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Academy Engraved LET")});
        lineEdit->setFont(font1);
        lineEdit->setCursorPosition(12);
        lineEdit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        textBrowser_purpose = new QTextBrowser(p5_bodymap);
        textBrowser_purpose->setObjectName("textBrowser_purpose");
        textBrowser_purpose->setGeometry(QRect(680, 140, 151, 25));
        textBrowser_implementation = new QTextBrowser(p5_bodymap);
        textBrowser_implementation->setObjectName("textBrowser_implementation");
        textBrowser_implementation->setGeometry(QRect(680, 170, 151, 25));
        textBrowser_Principle = new QTextBrowser(p5_bodymap);
        textBrowser_Principle->setObjectName("textBrowser_Principle");
        textBrowser_Principle->setGeometry(QRect(680, 200, 151, 25));
        textBrowser_bodypart = new QTextBrowser(p5_bodymap);
        textBrowser_bodypart->setObjectName("textBrowser_bodypart");
        textBrowser_bodypart->setGeometry(QRect(680, 230, 151, 25));
        textBrowser_name = new QTextBrowser(p5_bodymap);
        textBrowser_name->setObjectName("textBrowser_name");
        textBrowser_name->setGeometry(QRect(680, 110, 151, 25));
        pushButton_gosearch = new QPushButton(p5_bodymap);
        pushButton_gosearch->setObjectName("pushButton_gosearch");
        pushButton_gosearch->setGeometry(QRect(760, 420, 71, 61));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/data/\345\217\221\351\200\201-\345\256\236\350\211\262.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_gosearch->setIcon(icon);
        pushButton_gosearch->setIconSize(QSize(30, 30));

        retranslateUi(p5_bodymap);

        QMetaObject::connectSlotsByName(p5_bodymap);
    } // setupUi

    void retranslateUi(QWidget *p5_bodymap)
    {
        p5_bodymap->setWindowTitle(QCoreApplication::translate("p5_bodymap", "Form", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("p5_bodymap", "\350\257\267\351\200\211\346\213\251", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("p5_bodymap", "\344\270\273\345\212\250\350\247\246\350\247\211\345\234\260\345\233\276", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("p5_bodymap", "\350\242\253\345\212\250\350\247\246\350\247\211\345\234\260\345\233\276", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("p5_bodymap", "\346\270\251\345\272\246\346\225\217\346\204\237\345\272\246\350\272\253\344\275\223\345\234\260\345\233\276", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("p5_bodymap", "\350\264\237\350\215\267\345\234\260\345\233\276", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("p5_bodymap", "\344\270\212\350\202\242\345\217\257\350\276\276\346\200\247\345\234\260\345\233\276", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("p5_bodymap", "\350\272\253\345\221\250\350\267\235\347\246\273\346\204\237\347\237\245\345\234\260\345\233\276", nullptr));
        comboBox->setItemText(7, QCoreApplication::translate("p5_bodymap", "\350\247\206\350\247\211\345\217\257\350\276\276\346\200\247\345\234\260\345\233\276", nullptr));
        comboBox->setItemText(8, QCoreApplication::translate("p5_bodymap", "\344\277\241\345\217\267\345\217\257\350\276\276\346\200\247\345\234\260\345\233\276", nullptr));
        comboBox->setItemText(9, QCoreApplication::translate("p5_bodymap", "\350\277\220\345\212\250\351\232\234\347\242\215\345\234\260\345\233\276", nullptr));

        pushButton->setText(QCoreApplication::translate("p5_bodymap", "EXIT", nullptr));
        label_2->setText(QCoreApplication::translate("p5_bodymap", "\347\233\270\345\205\263\344\272\272\345\233\240\346\265\213\351\207\217\346\226\271\346\263\225", nullptr));
        label_3->setText(QCoreApplication::translate("p5_bodymap", "Name:", nullptr));
        label_4->setText(QCoreApplication::translate("p5_bodymap", "Purpose\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("p5_bodymap", "Implementation:", nullptr));
        label_6->setText(QCoreApplication::translate("p5_bodymap", "Scientific Principle:", nullptr));
        label_7->setText(QCoreApplication::translate("p5_bodymap", "Suitable Body Part: ", nullptr));
        label_8->setText(QCoreApplication::translate("p5_bodymap", "Details:", nullptr));
        label_9->setText(QCoreApplication::translate("p5_bodymap", "Reference:", nullptr));
        ai_logo_body_map->setText(QString());
        textBrowser_Details->setHtml(QCoreApplication::translate("p5_bodymap", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">null</p></body></html>", nullptr));
        textBrowser_reference->setHtml(QCoreApplication::translate("p5_bodymap", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">null</p></body></html>", nullptr));
        label_11->setText(QCoreApplication::translate("p5_bodymap", "BDAS_chat", nullptr));
        lineEdit->setText(QCoreApplication::translate("p5_bodymap", "\350\257\267\350\276\223\345\205\245\346\202\250\345\205\263\344\272\216\350\257\245\345\234\260\345\233\276\347\232\204\351\227\256\351\242\230", nullptr));
        textBrowser_purpose->setHtml(QCoreApplication::translate("p5_bodymap", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">null</p></body></html>", nullptr));
        textBrowser_implementation->setHtml(QCoreApplication::translate("p5_bodymap", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">null</p></body></html>", nullptr));
        textBrowser_Principle->setHtml(QCoreApplication::translate("p5_bodymap", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">null</p></body></html>", nullptr));
        textBrowser_bodypart->setHtml(QCoreApplication::translate("p5_bodymap", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">null</p></body></html>", nullptr));
        textBrowser_name->setHtml(QCoreApplication::translate("p5_bodymap", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">null</p></body></html>", nullptr));
        pushButton_gosearch->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class p5_bodymap: public Ui_p5_bodymap {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_P5_BODYMAP_H
