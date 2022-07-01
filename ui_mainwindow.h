/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *monday;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_monday;
    QListWidget *listWidget_monday;
    QWidget *tuesday;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_tuesday;
    QListWidget *listWidget_tuesday;
    QWidget *wednesday;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_wednesday;
    QListWidget *listWidget_wednesday;
    QWidget *thursday;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_thursday;
    QListWidget *listWidget_thursday;
    QWidget *friday;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_friday;
    QListWidget *listWidget_friday;
    QWidget *saturday;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_saturday;
    QListWidget *listWidget_saturday;
    QWidget *sunday;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_sunday;
    QListWidget *listWidget_sunday;
    QWidget *extra_wishes;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_8;
    QListWidget *listWidget_extra;
    QWidget *tab;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        monday = new QWidget();
        monday->setObjectName(QString::fromUtf8("monday"));
        verticalLayout_2 = new QVBoxLayout(monday);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_monday = new QLabel(monday);
        label_monday->setObjectName(QString::fromUtf8("label_monday"));
        QFont font;
        font.setPointSize(13);
        label_monday->setFont(font);

        verticalLayout_2->addWidget(label_monday);

        listWidget_monday = new QListWidget(monday);
        listWidget_monday->setObjectName(QString::fromUtf8("listWidget_monday"));
        QFont font1;
        font1.setPointSize(12);
        listWidget_monday->setFont(font1);
        listWidget_monday->setSelectionRectVisible(true);
        listWidget_monday->setSortingEnabled(false);

        verticalLayout_2->addWidget(listWidget_monday);

        tabWidget->addTab(monday, QString());
        tuesday = new QWidget();
        tuesday->setObjectName(QString::fromUtf8("tuesday"));
        verticalLayout_3 = new QVBoxLayout(tuesday);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_tuesday = new QLabel(tuesday);
        label_tuesday->setObjectName(QString::fromUtf8("label_tuesday"));
        label_tuesday->setFont(font);

        verticalLayout_3->addWidget(label_tuesday);

        listWidget_tuesday = new QListWidget(tuesday);
        listWidget_tuesday->setObjectName(QString::fromUtf8("listWidget_tuesday"));
        listWidget_tuesday->setFont(font1);
        listWidget_tuesday->setSelectionRectVisible(true);
        listWidget_tuesday->setSortingEnabled(false);

        verticalLayout_3->addWidget(listWidget_tuesday);

        tabWidget->addTab(tuesday, QString());
        wednesday = new QWidget();
        wednesday->setObjectName(QString::fromUtf8("wednesday"));
        verticalLayout_4 = new QVBoxLayout(wednesday);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_wednesday = new QLabel(wednesday);
        label_wednesday->setObjectName(QString::fromUtf8("label_wednesday"));
        label_wednesday->setFont(font);

        verticalLayout_4->addWidget(label_wednesday);

        listWidget_wednesday = new QListWidget(wednesday);
        listWidget_wednesday->setObjectName(QString::fromUtf8("listWidget_wednesday"));
        listWidget_wednesday->setFont(font1);
        listWidget_wednesday->setSelectionRectVisible(true);
        listWidget_wednesday->setSortingEnabled(false);

        verticalLayout_4->addWidget(listWidget_wednesday);

        tabWidget->addTab(wednesday, QString());
        thursday = new QWidget();
        thursday->setObjectName(QString::fromUtf8("thursday"));
        verticalLayout_5 = new QVBoxLayout(thursday);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_thursday = new QLabel(thursday);
        label_thursday->setObjectName(QString::fromUtf8("label_thursday"));
        label_thursday->setFont(font);

        verticalLayout_5->addWidget(label_thursday);

        listWidget_thursday = new QListWidget(thursday);
        listWidget_thursday->setObjectName(QString::fromUtf8("listWidget_thursday"));
        listWidget_thursday->setFont(font1);
        listWidget_thursday->setSelectionRectVisible(true);
        listWidget_thursday->setSortingEnabled(false);

        verticalLayout_5->addWidget(listWidget_thursday);

        tabWidget->addTab(thursday, QString());
        friday = new QWidget();
        friday->setObjectName(QString::fromUtf8("friday"));
        verticalLayout_6 = new QVBoxLayout(friday);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_friday = new QLabel(friday);
        label_friday->setObjectName(QString::fromUtf8("label_friday"));
        label_friday->setFont(font);

        verticalLayout_6->addWidget(label_friday);

        listWidget_friday = new QListWidget(friday);
        listWidget_friday->setObjectName(QString::fromUtf8("listWidget_friday"));
        listWidget_friday->setFont(font1);
        listWidget_friday->setSelectionRectVisible(true);
        listWidget_friday->setSortingEnabled(false);

        verticalLayout_6->addWidget(listWidget_friday);

        tabWidget->addTab(friday, QString());
        saturday = new QWidget();
        saturday->setObjectName(QString::fromUtf8("saturday"));
        verticalLayout_7 = new QVBoxLayout(saturday);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        label_saturday = new QLabel(saturday);
        label_saturday->setObjectName(QString::fromUtf8("label_saturday"));
        label_saturday->setFont(font);

        verticalLayout_7->addWidget(label_saturday);

        listWidget_saturday = new QListWidget(saturday);
        listWidget_saturday->setObjectName(QString::fromUtf8("listWidget_saturday"));
        listWidget_saturday->setFont(font1);
        listWidget_saturday->setSelectionRectVisible(true);
        listWidget_saturday->setSortingEnabled(false);

        verticalLayout_7->addWidget(listWidget_saturday);

        tabWidget->addTab(saturday, QString());
        sunday = new QWidget();
        sunday->setObjectName(QString::fromUtf8("sunday"));
        verticalLayout_8 = new QVBoxLayout(sunday);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        label_sunday = new QLabel(sunday);
        label_sunday->setObjectName(QString::fromUtf8("label_sunday"));
        label_sunday->setFont(font);

        verticalLayout_8->addWidget(label_sunday);

        listWidget_sunday = new QListWidget(sunday);
        listWidget_sunday->setObjectName(QString::fromUtf8("listWidget_sunday"));
        listWidget_sunday->setFont(font1);
        listWidget_sunday->setSelectionRectVisible(true);
        listWidget_sunday->setSortingEnabled(false);

        verticalLayout_8->addWidget(listWidget_sunday);

        tabWidget->addTab(sunday, QString());
        extra_wishes = new QWidget();
        extra_wishes->setObjectName(QString::fromUtf8("extra_wishes"));
        verticalLayout_9 = new QVBoxLayout(extra_wishes);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        label_8 = new QLabel(extra_wishes);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font);

        verticalLayout_9->addWidget(label_8);

        listWidget_extra = new QListWidget(extra_wishes);
        listWidget_extra->setObjectName(QString::fromUtf8("listWidget_extra"));
        listWidget_extra->setFont(font1);
        listWidget_extra->setSelectionRectVisible(true);
        listWidget_extra->setSortingEnabled(false);

        verticalLayout_9->addWidget(listWidget_extra);

        tabWidget->addTab(extra_wishes, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tabWidget->addTab(tab, QString());

        verticalLayout->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(8);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_monday->setText(QCoreApplication::translate("MainWindow", "Example 1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(monday), QCoreApplication::translate("MainWindow", "Monday", nullptr));
        label_tuesday->setText(QCoreApplication::translate("MainWindow", "Example 2", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tuesday), QCoreApplication::translate("MainWindow", "Tuesday", nullptr));
        label_wednesday->setText(QCoreApplication::translate("MainWindow", "Example 3", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(wednesday), QCoreApplication::translate("MainWindow", "Wednesday", nullptr));
        label_thursday->setText(QCoreApplication::translate("MainWindow", "Example 4", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(thursday), QCoreApplication::translate("MainWindow", "Thursday", nullptr));
        label_friday->setText(QCoreApplication::translate("MainWindow", "Example 5", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(friday), QCoreApplication::translate("MainWindow", "Friday", nullptr));
        label_saturday->setText(QCoreApplication::translate("MainWindow", "Example 6", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(saturday), QCoreApplication::translate("MainWindow", "Saturday", nullptr));
        label_sunday->setText(QCoreApplication::translate("MainWindow", "Example 7", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(sunday), QCoreApplication::translate("MainWindow", "Sunday", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Extra Things To Buy", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(extra_wishes), QCoreApplication::translate("MainWindow", "Extra Wishes", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Update", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
