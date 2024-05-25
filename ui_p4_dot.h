/********************************************************************************
** Form generated from reading UI file 'p4_dot.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_P4_DOT_H
#define UI_P4_DOT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_p4_dot
{
public:
    QVBoxLayout *verticalLayout_5;
    QPushButton *p4_pushbutton_goback;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout;
    QScrollArea *p4_scrollarea;
    QWidget *p4_scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QTextBrowser *p4_textBrowser_background;
    QLabel *label_5;
    QTextBrowser *p4_textBrowser_desicovery;
    QLabel *label;
    QLabel *label_6;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_6;
    QTextBrowser *p4_textBrowser_requirement1;
    QTextBrowser *p4_textBrowser_requirement2;
    QTextBrowser *p4_textBrowser_requirement3;
    QLabel *label_7;
    QTextBrowser *p4_textBrowser_requirement_converge;
    QLabel *label_2;
    QLabel *label_4;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_4;
    QTextBrowser *p4_textBrowser_func1;
    QTextBrowser *p4_textBrowser_func3;
    QTextBrowser *p4_textBrowser_func2;
    QLabel *label_8;
    QTextBrowser *p4_textBrowser_func_converge;
    QLabel *label_9;
    QLabel *label_10;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QTextBrowser *p4_textBrowser_tech3;
    QTextBrowser *p4_textBrowser_tech2;
    QTextBrowser *p4_textBrowser_tech1;
    QLabel *label_11;
    QTextBrowser *p4_textBrowser_tech_converge;

    void setupUi(QWidget *p4_dot)
    {
        if (p4_dot->objectName().isEmpty())
            p4_dot->setObjectName("p4_dot");
        p4_dot->resize(841, 458);
        QSizePolicy sizePolicy(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(p4_dot->sizePolicy().hasHeightForWidth());
        p4_dot->setSizePolicy(sizePolicy);
        p4_dot->setMaximumSize(QSize(16777215, 458));
        verticalLayout_5 = new QVBoxLayout(p4_dot);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setSizeConstraint(QLayout::SetDefaultConstraint);
        p4_pushbutton_goback = new QPushButton(p4_dot);
        p4_pushbutton_goback->setObjectName("p4_pushbutton_goback");
        p4_pushbutton_goback->setMaximumSize(QSize(16777215, 40));

        verticalLayout_5->addWidget(p4_pushbutton_goback);

        widget_4 = new QWidget(p4_dot);
        widget_4->setObjectName("widget_4");
        widget_4->setEnabled(true);
        sizePolicy.setHeightForWidth(widget_4->sizePolicy().hasHeightForWidth());
        widget_4->setSizePolicy(sizePolicy);
        widget_4->setMinimumSize(QSize(0, 400));
        widget_4->setMaximumSize(QSize(16777215, 400));
        verticalLayout = new QVBoxLayout(widget_4);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout->setContentsMargins(1, -1, -1, -1);
        p4_scrollarea = new QScrollArea(widget_4);
        p4_scrollarea->setObjectName("p4_scrollarea");
        sizePolicy.setHeightForWidth(p4_scrollarea->sizePolicy().hasHeightForWidth());
        p4_scrollarea->setSizePolicy(sizePolicy);
        p4_scrollarea->setMinimumSize(QSize(0, 400));
        p4_scrollarea->setMaximumSize(QSize(16777215, 400));
        p4_scrollarea->setMidLineWidth(0);
        p4_scrollarea->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        p4_scrollarea->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        p4_scrollarea->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        p4_scrollarea->setWidgetResizable(true);
        p4_scrollarea->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        p4_scrollAreaWidgetContents = new QWidget();
        p4_scrollAreaWidgetContents->setObjectName("p4_scrollAreaWidgetContents");
        p4_scrollAreaWidgetContents->setGeometry(QRect(0, 0, 802, 450));
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(p4_scrollAreaWidgetContents->sizePolicy().hasHeightForWidth());
        p4_scrollAreaWidgetContents->setSizePolicy(sizePolicy1);
        p4_scrollAreaWidgetContents->setMinimumSize(QSize(0, 450));
        p4_scrollAreaWidgetContents->setMaximumSize(QSize(16777215, 10000));
        verticalLayout_2 = new QVBoxLayout(p4_scrollAreaWidgetContents);
        verticalLayout_2->setSpacing(2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setSizeConstraint(QLayout::SetMinimumSize);
        verticalLayout_2->setContentsMargins(-1, 12, -1, -1);
        label_3 = new QLabel(p4_scrollAreaWidgetContents);
        label_3->setObjectName("label_3");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy2);
        label_3->setMinimumSize(QSize(0, 15));
        label_3->setMaximumSize(QSize(16777215, 15));
        QFont font;
        font.setFamilies({QString::fromUtf8("Heiti SC")});
        font.setPointSize(14);
        label_3->setFont(font);

        verticalLayout_2->addWidget(label_3, 0, Qt::AlignTop);

        p4_textBrowser_background = new QTextBrowser(p4_scrollAreaWidgetContents);
        p4_textBrowser_background->setObjectName("p4_textBrowser_background");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(p4_textBrowser_background->sizePolicy().hasHeightForWidth());
        p4_textBrowser_background->setSizePolicy(sizePolicy3);
        p4_textBrowser_background->setMinimumSize(QSize(0, 100));
        p4_textBrowser_background->setMaximumSize(QSize(16777215, 200));

        verticalLayout_2->addWidget(p4_textBrowser_background);

        label_5 = new QLabel(p4_scrollAreaWidgetContents);
        label_5->setObjectName("label_5");
        label_5->setMinimumSize(QSize(0, 15));
        label_5->setMaximumSize(QSize(16777215, 15));
        label_5->setFont(font);

        verticalLayout_2->addWidget(label_5);

        p4_textBrowser_desicovery = new QTextBrowser(p4_scrollAreaWidgetContents);
        p4_textBrowser_desicovery->setObjectName("p4_textBrowser_desicovery");
        p4_textBrowser_desicovery->setMinimumSize(QSize(0, 100));
        p4_textBrowser_desicovery->setMaximumSize(QSize(16777215, 200));

        verticalLayout_2->addWidget(p4_textBrowser_desicovery);

        label = new QLabel(p4_scrollAreaWidgetContents);
        label->setObjectName("label");
        label->setMinimumSize(QSize(0, 15));
        label->setMaximumSize(QSize(16777215, 15));
        label->setFont(font);

        verticalLayout_2->addWidget(label);

        label_6 = new QLabel(p4_scrollAreaWidgetContents);
        label_6->setObjectName("label_6");
        label_6->setMinimumSize(QSize(0, 15));
        label_6->setMaximumSize(QSize(16777215, 15));
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_6);

        widget_3 = new QWidget(p4_scrollAreaWidgetContents);
        widget_3->setObjectName("widget_3");
        widget_3->setMinimumSize(QSize(0, 100));
        widget_3->setMaximumSize(QSize(16777215, 400));
        horizontalLayout_6 = new QHBoxLayout(widget_3);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        p4_textBrowser_requirement1 = new QTextBrowser(widget_3);
        p4_textBrowser_requirement1->setObjectName("p4_textBrowser_requirement1");
        p4_textBrowser_requirement1->setMinimumSize(QSize(0, 100));
        p4_textBrowser_requirement1->setMaximumSize(QSize(16777215, 200));

        horizontalLayout_6->addWidget(p4_textBrowser_requirement1);

        p4_textBrowser_requirement2 = new QTextBrowser(widget_3);
        p4_textBrowser_requirement2->setObjectName("p4_textBrowser_requirement2");
        p4_textBrowser_requirement2->setMinimumSize(QSize(0, 100));
        p4_textBrowser_requirement2->setMaximumSize(QSize(16777215, 200));

        horizontalLayout_6->addWidget(p4_textBrowser_requirement2);

        p4_textBrowser_requirement3 = new QTextBrowser(widget_3);
        p4_textBrowser_requirement3->setObjectName("p4_textBrowser_requirement3");
        p4_textBrowser_requirement3->setMinimumSize(QSize(0, 100));
        p4_textBrowser_requirement3->setMaximumSize(QSize(16777215, 200));

        horizontalLayout_6->addWidget(p4_textBrowser_requirement3);


        verticalLayout_2->addWidget(widget_3, 0, Qt::AlignTop);

        label_7 = new QLabel(p4_scrollAreaWidgetContents);
        label_7->setObjectName("label_7");
        label_7->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_7);

        p4_textBrowser_requirement_converge = new QTextBrowser(p4_scrollAreaWidgetContents);
        p4_textBrowser_requirement_converge->setObjectName("p4_textBrowser_requirement_converge");
        p4_textBrowser_requirement_converge->setMinimumSize(QSize(0, 100));
        p4_textBrowser_requirement_converge->setMaximumSize(QSize(16777215, 200));

        verticalLayout_2->addWidget(p4_textBrowser_requirement_converge);

        label_2 = new QLabel(p4_scrollAreaWidgetContents);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(0, 15));
        label_2->setMaximumSize(QSize(16777215, 15));
        label_2->setFont(font);

        verticalLayout_2->addWidget(label_2);

        label_4 = new QLabel(p4_scrollAreaWidgetContents);
        label_4->setObjectName("label_4");
        label_4->setMinimumSize(QSize(0, 15));
        label_4->setMaximumSize(QSize(16777215, 15));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_4);

        widget = new QWidget(p4_scrollAreaWidgetContents);
        widget->setObjectName("widget");
        widget->setMinimumSize(QSize(0, 100));
        widget->setMaximumSize(QSize(16777215, 400));
        horizontalLayout_4 = new QHBoxLayout(widget);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        p4_textBrowser_func1 = new QTextBrowser(widget);
        p4_textBrowser_func1->setObjectName("p4_textBrowser_func1");
        p4_textBrowser_func1->setMinimumSize(QSize(0, 100));
        p4_textBrowser_func1->setMaximumSize(QSize(16777215, 200));

        horizontalLayout_4->addWidget(p4_textBrowser_func1);

        p4_textBrowser_func3 = new QTextBrowser(widget);
        p4_textBrowser_func3->setObjectName("p4_textBrowser_func3");
        p4_textBrowser_func3->setMinimumSize(QSize(0, 100));
        p4_textBrowser_func3->setMaximumSize(QSize(16777215, 200));

        horizontalLayout_4->addWidget(p4_textBrowser_func3);

        p4_textBrowser_func2 = new QTextBrowser(widget);
        p4_textBrowser_func2->setObjectName("p4_textBrowser_func2");
        p4_textBrowser_func2->setMinimumSize(QSize(0, 100));
        p4_textBrowser_func2->setMaximumSize(QSize(16777215, 200));

        horizontalLayout_4->addWidget(p4_textBrowser_func2);


        verticalLayout_2->addWidget(widget, 0, Qt::AlignTop);

        label_8 = new QLabel(p4_scrollAreaWidgetContents);
        label_8->setObjectName("label_8");
        label_8->setMinimumSize(QSize(0, 15));
        label_8->setMaximumSize(QSize(16777215, 15));
        label_8->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_8);

        p4_textBrowser_func_converge = new QTextBrowser(p4_scrollAreaWidgetContents);
        p4_textBrowser_func_converge->setObjectName("p4_textBrowser_func_converge");
        p4_textBrowser_func_converge->setMinimumSize(QSize(0, 100));
        p4_textBrowser_func_converge->setMaximumSize(QSize(16777215, 200));

        verticalLayout_2->addWidget(p4_textBrowser_func_converge);

        label_9 = new QLabel(p4_scrollAreaWidgetContents);
        label_9->setObjectName("label_9");
        label_9->setFont(font);

        verticalLayout_2->addWidget(label_9);

        label_10 = new QLabel(p4_scrollAreaWidgetContents);
        label_10->setObjectName("label_10");
        label_10->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_10);

        widget_2 = new QWidget(p4_scrollAreaWidgetContents);
        widget_2->setObjectName("widget_2");
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName("horizontalLayout");
        p4_textBrowser_tech3 = new QTextBrowser(widget_2);
        p4_textBrowser_tech3->setObjectName("p4_textBrowser_tech3");
        p4_textBrowser_tech3->setMinimumSize(QSize(0, 100));
        p4_textBrowser_tech3->setMaximumSize(QSize(16777215, 200));

        horizontalLayout->addWidget(p4_textBrowser_tech3);

        p4_textBrowser_tech2 = new QTextBrowser(widget_2);
        p4_textBrowser_tech2->setObjectName("p4_textBrowser_tech2");
        p4_textBrowser_tech2->setMinimumSize(QSize(0, 100));
        p4_textBrowser_tech2->setMaximumSize(QSize(16777215, 200));

        horizontalLayout->addWidget(p4_textBrowser_tech2);

        p4_textBrowser_tech1 = new QTextBrowser(widget_2);
        p4_textBrowser_tech1->setObjectName("p4_textBrowser_tech1");
        p4_textBrowser_tech1->setMinimumSize(QSize(0, 100));
        p4_textBrowser_tech1->setMaximumSize(QSize(16777215, 200));

        horizontalLayout->addWidget(p4_textBrowser_tech1);


        verticalLayout_2->addWidget(widget_2);

        label_11 = new QLabel(p4_scrollAreaWidgetContents);
        label_11->setObjectName("label_11");
        label_11->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_11);

        p4_textBrowser_tech_converge = new QTextBrowser(p4_scrollAreaWidgetContents);
        p4_textBrowser_tech_converge->setObjectName("p4_textBrowser_tech_converge");
        p4_textBrowser_tech_converge->setMinimumSize(QSize(0, 100));
        p4_textBrowser_tech_converge->setMaximumSize(QSize(16777215, 200));

        verticalLayout_2->addWidget(p4_textBrowser_tech_converge);

        p4_scrollarea->setWidget(p4_scrollAreaWidgetContents);

        verticalLayout->addWidget(p4_scrollarea, 0, Qt::AlignTop);


        verticalLayout_5->addWidget(widget_4);


        retranslateUi(p4_dot);

        QMetaObject::connectSlotsByName(p4_dot);
    } // setupUi

    void retranslateUi(QWidget *p4_dot)
    {
        p4_dot->setWindowTitle(QCoreApplication::translate("p4_dot", "Form", nullptr));
        p4_pushbutton_goback->setText(QCoreApplication::translate("p4_dot", "EXIT", nullptr));
        label_3->setText(QCoreApplication::translate("p4_dot", "Design Background", nullptr));
        label_5->setText(QCoreApplication::translate("p4_dot", "Discovery", nullptr));
        label->setText(QCoreApplication::translate("p4_dot", "Requirement Analyze & Define", nullptr));
        label_6->setText(QCoreApplication::translate("p4_dot", "Reverge", nullptr));
        label_7->setText(QCoreApplication::translate("p4_dot", "Coverge", nullptr));
        label_2->setText(QCoreApplication::translate("p4_dot", "Produce Ideate\302\240&\302\240Define", nullptr));
        label_4->setText(QCoreApplication::translate("p4_dot", "Reverge", nullptr));
        label_8->setText(QCoreApplication::translate("p4_dot", "Converge", nullptr));
        label_9->setText(QCoreApplication::translate("p4_dot", "Technology Analyze\302\240&\302\240Define", nullptr));
        label_10->setText(QCoreApplication::translate("p4_dot", "Reverge", nullptr));
        label_11->setText(QCoreApplication::translate("p4_dot", "Converge", nullptr));
    } // retranslateUi

};

namespace Ui {
    class p4_dot: public Ui_p4_dot {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_P4_DOT_H
