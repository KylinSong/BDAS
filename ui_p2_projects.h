/********************************************************************************
** Form generated from reading UI file 'p2_projects.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_P2_PROJECTS_H
#define UI_P2_PROJECTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_p2_projects
{
public:
    QPushButton *p2_pushButton_createNewProj;
    QTableWidget *tableWidget;
    QPushButton *p2_pushButton_goback;

    void setupUi(QWidget *p2_projects)
    {
        if (p2_projects->objectName().isEmpty())
            p2_projects->setObjectName("p2_projects");
        p2_projects->resize(850, 491);
        p2_pushButton_createNewProj = new QPushButton(p2_projects);
        p2_pushButton_createNewProj->setObjectName("p2_pushButton_createNewProj");
        p2_pushButton_createNewProj->setGeometry(QRect(90, 30, 121, 41));
        tableWidget = new QTableWidget(p2_projects);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        if (tableWidget->rowCount() < 1)
            tableWidget->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem2);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(90, 80, 641, 331));
        p2_pushButton_goback = new QPushButton(p2_projects);
        p2_pushButton_goback->setObjectName("p2_pushButton_goback");
        p2_pushButton_goback->setGeometry(QRect(610, 30, 121, 41));

        retranslateUi(p2_projects);

        QMetaObject::connectSlotsByName(p2_projects);
    } // setupUi

    void retranslateUi(QWidget *p2_projects)
    {
        p2_projects->setWindowTitle(QCoreApplication::translate("p2_projects", "Form", nullptr));
        p2_pushButton_createNewProj->setText(QCoreApplication::translate("p2_projects", "\345\210\233\345\273\272\346\226\260\351\241\271\347\233\256", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("p2_projects", "name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("p2_projects", "state", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("p2_projects", "proj1", nullptr));
        p2_pushButton_goback->setText(QCoreApplication::translate("p2_projects", "EXIT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class p2_projects: public Ui_p2_projects {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_P2_PROJECTS_H
