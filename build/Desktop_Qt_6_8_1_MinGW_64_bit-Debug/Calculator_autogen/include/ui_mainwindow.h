/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPlainTextEdit *NumberInput;
    QPushButton *Plusbutton;
    QPushButton *MinusButton;
    QPushButton *DivideButton;
    QPushButton *MultiplyButton;
    QWidget *gridLayoutWidget;
    QGridLayout *NumbersGrid;
    QPushButton *Num5;
    QPushButton *Num6;
    QPushButton *Num8;
    QPushButton *Num9;
    QPushButton *Num1;
    QPushButton *Num2;
    QPushButton *Num4;
    QPushButton *Num7;
    QPushButton *Num3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(784, 611);
        MainWindow->setFocusPolicy(Qt::FocusPolicy::ClickFocus);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        NumberInput = new QPlainTextEdit(centralwidget);
        NumberInput->setObjectName("NumberInput");
        NumberInput->setGeometry(QRect(30, 20, 491, 71));
        QFont font;
        font.setPointSize(24);
        font.setBold(true);
        font.setItalic(false);
        font.setUnderline(false);
        font.setStrikeOut(false);
        font.setKerning(true);
        font.setHintingPreference(QFont::PreferDefaultHinting);
        NumberInput->setFont(font);
        NumberInput->setFocusPolicy(Qt::FocusPolicy::ClickFocus);
        NumberInput->setFrameShape(QFrame::Shape::Box);
        NumberInput->setLineWidth(1);
        NumberInput->setTabChangesFocus(false);
        Plusbutton = new QPushButton(centralwidget);
        Plusbutton->setObjectName("Plusbutton");
        Plusbutton->setGeometry(QRect(520, 230, 101, 91));
        QFont font1;
        font1.setPointSize(30);
        Plusbutton->setFont(font1);
        MinusButton = new QPushButton(centralwidget);
        MinusButton->setObjectName("MinusButton");
        MinusButton->setGeometry(QRect(640, 230, 101, 91));
        MinusButton->setFont(font1);
        DivideButton = new QPushButton(centralwidget);
        DivideButton->setObjectName("DivideButton");
        DivideButton->setGeometry(QRect(640, 330, 101, 91));
        DivideButton->setFont(font1);
        MultiplyButton = new QPushButton(centralwidget);
        MultiplyButton->setObjectName("MultiplyButton");
        MultiplyButton->setGeometry(QRect(520, 330, 101, 91));
        MultiplyButton->setFont(font1);
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(50, 110, 451, 411));
        NumbersGrid = new QGridLayout(gridLayoutWidget);
        NumbersGrid->setObjectName("NumbersGrid");
        NumbersGrid->setContentsMargins(0, 0, 0, 0);
        Num5 = new QPushButton(gridLayoutWidget);
        Num5->setObjectName("Num5");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Num5->sizePolicy().hasHeightForWidth());
        Num5->setSizePolicy(sizePolicy);
        Num5->setFont(font1);

        NumbersGrid->addWidget(Num5, 1, 1, 1, 1);

        Num6 = new QPushButton(gridLayoutWidget);
        Num6->setObjectName("Num6");
        sizePolicy.setHeightForWidth(Num6->sizePolicy().hasHeightForWidth());
        Num6->setSizePolicy(sizePolicy);
        Num6->setFont(font1);

        NumbersGrid->addWidget(Num6, 1, 2, 1, 1);

        Num8 = new QPushButton(gridLayoutWidget);
        Num8->setObjectName("Num8");
        sizePolicy.setHeightForWidth(Num8->sizePolicy().hasHeightForWidth());
        Num8->setSizePolicy(sizePolicy);
        Num8->setFont(font1);

        NumbersGrid->addWidget(Num8, 2, 1, 1, 1);

        Num9 = new QPushButton(gridLayoutWidget);
        Num9->setObjectName("Num9");
        sizePolicy.setHeightForWidth(Num9->sizePolicy().hasHeightForWidth());
        Num9->setSizePolicy(sizePolicy);
        Num9->setFont(font1);

        NumbersGrid->addWidget(Num9, 2, 2, 1, 1);

        Num1 = new QPushButton(gridLayoutWidget);
        Num1->setObjectName("Num1");
        sizePolicy.setHeightForWidth(Num1->sizePolicy().hasHeightForWidth());
        Num1->setSizePolicy(sizePolicy);
        Num1->setFont(font1);

        NumbersGrid->addWidget(Num1, 0, 0, 1, 1);

        Num2 = new QPushButton(gridLayoutWidget);
        Num2->setObjectName("Num2");
        sizePolicy.setHeightForWidth(Num2->sizePolicy().hasHeightForWidth());
        Num2->setSizePolicy(sizePolicy);
        Num2->setFont(font1);

        NumbersGrid->addWidget(Num2, 0, 1, 1, 1);

        Num4 = new QPushButton(gridLayoutWidget);
        Num4->setObjectName("Num4");
        sizePolicy.setHeightForWidth(Num4->sizePolicy().hasHeightForWidth());
        Num4->setSizePolicy(sizePolicy);
        Num4->setFont(font1);

        NumbersGrid->addWidget(Num4, 1, 0, 1, 1);

        Num7 = new QPushButton(gridLayoutWidget);
        Num7->setObjectName("Num7");
        sizePolicy.setHeightForWidth(Num7->sizePolicy().hasHeightForWidth());
        Num7->setSizePolicy(sizePolicy);
        Num7->setFont(font1);

        NumbersGrid->addWidget(Num7, 2, 0, 1, 1);

        Num3 = new QPushButton(gridLayoutWidget);
        Num3->setObjectName("Num3");
        sizePolicy.setHeightForWidth(Num3->sizePolicy().hasHeightForWidth());
        Num3->setSizePolicy(sizePolicy);
        Num3->setFont(font1);

        NumbersGrid->addWidget(Num3, 0, 2, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 784, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        NumberInput->setPlainText(QString());
        Plusbutton->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        MinusButton->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        DivideButton->setText(QCoreApplication::translate("MainWindow", "\303\267", nullptr));
        MultiplyButton->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        Num5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        Num6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        Num8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        Num9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        Num1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        Num2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        Num4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        Num7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        Num3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
