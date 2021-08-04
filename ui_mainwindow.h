/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_start_game;
    QAction *action_close_game;
    QWidget *centralwidget;
    QLabel *background;
    QLabel *label_title;
    QLabel *car;
    QPushButton *button_start_game;
    QLabel *label_distance;
    QLCDNumber *lcd_clock;
    QLabel *block_01;
    QLabel *block_02;
    QLabel *block_03;
    QLabel *block_04;
    QLabel *block_05;
    QLabel *block_06;
    QMenuBar *menubar;
    QMenu *menu;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 532);
        MainWindow->setMinimumSize(QSize(800, 532));
        MainWindow->setMaximumSize(QSize(800, 532));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/src/icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        action_start_game = new QAction(MainWindow);
        action_start_game->setObjectName(QString::fromUtf8("action_start_game"));
        action_close_game = new QAction(MainWindow);
        action_close_game->setObjectName(QString::fromUtf8("action_close_game"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        background = new QLabel(centralwidget);
        background->setObjectName(QString::fromUtf8("background"));
        background->setGeometry(QRect(0, 0, 4800, 512));
        background->setPixmap(QPixmap(QString::fromUtf8(":/src/map.png")));
        label_title = new QLabel(centralwidget);
        label_title->setObjectName(QString::fromUtf8("label_title"));
        label_title->setGeometry(QRect(210, 70, 384, 150));
        label_title->setPixmap(QPixmap(QString::fromUtf8(":/src/game_name.png")));
        car = new QLabel(centralwidget);
        car->setObjectName(QString::fromUtf8("car"));
        car->setGeometry(QRect(10, 220, 237, 71));
        car->setPixmap(QPixmap(QString::fromUtf8(":/src/car.png")));
        car->setScaledContents(true);
        button_start_game = new QPushButton(centralwidget);
        button_start_game->setObjectName(QString::fromUtf8("button_start_game"));
        button_start_game->setGeometry(QRect(280, 270, 250, 100));
        button_start_game->setFocusPolicy(Qt::NoFocus);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/src/start_btn.png"), QSize(), QIcon::Normal, QIcon::Off);
        button_start_game->setIcon(icon1);
        button_start_game->setIconSize(QSize(250, 100));
        label_distance = new QLabel(centralwidget);
        label_distance->setObjectName(QString::fromUtf8("label_distance"));
        label_distance->setGeometry(QRect(10, 40, 300, 36));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\273\237\346\255\243\351\273\221\351\253\224"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label_distance->setFont(font);
        label_distance->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lcd_clock = new QLCDNumber(centralwidget);
        lcd_clock->setObjectName(QString::fromUtf8("lcd_clock"));
        lcd_clock->setGeometry(QRect(690, 40, 100, 40));
        block_01 = new QLabel(centralwidget);
        block_01->setObjectName(QString::fromUtf8("block_01"));
        block_01->setGeometry(QRect(620, 40, 64, 64));
        block_01->setPixmap(QPixmap(QString::fromUtf8(":/src/item1.png")));
        block_02 = new QLabel(centralwidget);
        block_02->setObjectName(QString::fromUtf8("block_02"));
        block_02->setGeometry(QRect(620, 110, 64, 64));
        block_02->setPixmap(QPixmap(QString::fromUtf8(":/src/item2.png")));
        block_03 = new QLabel(centralwidget);
        block_03->setObjectName(QString::fromUtf8("block_03"));
        block_03->setGeometry(QRect(620, 180, 64, 64));
        block_03->setPixmap(QPixmap(QString::fromUtf8(":/src/item3.png")));
        block_04 = new QLabel(centralwidget);
        block_04->setObjectName(QString::fromUtf8("block_04"));
        block_04->setGeometry(QRect(620, 250, 64, 64));
        block_04->setPixmap(QPixmap(QString::fromUtf8(":/src/item3.png")));
        block_05 = new QLabel(centralwidget);
        block_05->setObjectName(QString::fromUtf8("block_05"));
        block_05->setGeometry(QRect(620, 320, 64, 64));
        block_05->setPixmap(QPixmap(QString::fromUtf8(":/src/item2.png")));
        block_06 = new QLabel(centralwidget);
        block_06->setObjectName(QString::fromUtf8("block_06"));
        block_06->setGeometry(QRect(620, 390, 64, 64));
        block_06->setPixmap(QPixmap(QString::fromUtf8(":/src/item1.png")));
        MainWindow->setCentralWidget(centralwidget);
        background->raise();
        block_06->raise();
        block_05->raise();
        block_04->raise();
        block_03->raise();
        block_02->raise();
        block_01->raise();
        label_title->raise();
        car->raise();
        button_start_game->raise();
        label_distance->raise();
        lcd_clock->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 24));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menu->menuAction());
        menu->addAction(action_start_game);
        menu->addSeparator();
        menu->addAction(action_close_game);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\350\272\262\351\201\277\350\273\212", nullptr));
        action_start_game->setText(QApplication::translate("MainWindow", "\351\226\213\345\247\213\351\201\212\346\210\262", nullptr));
#ifndef QT_NO_TOOLTIP
        action_start_game->setToolTip(QApplication::translate("MainWindow", "\351\226\213\345\247\213\351\201\212\346\210\262", nullptr));
#endif // QT_NO_TOOLTIP
        action_close_game->setText(QApplication::translate("MainWindow", "\351\227\234\351\226\211\351\201\212\346\210\262", nullptr));
#ifndef QT_NO_TOOLTIP
        action_close_game->setToolTip(QApplication::translate("MainWindow", "\351\227\234\351\226\211\351\201\212\346\210\262", nullptr));
#endif // QT_NO_TOOLTIP
        background->setText(QString());
        label_title->setText(QString());
        car->setText(QString());
        button_start_game->setText(QString());
        label_distance->setText(QApplication::translate("MainWindow", "\350\241\214\351\247\233\350\267\235\351\233\242: 0\345\205\254\345\260\272", nullptr));
        block_01->setText(QString());
        block_02->setText(QString());
        block_03->setText(QString());
        block_04->setText(QString());
        block_05->setText(QString());
        block_06->setText(QString());
        menu->setTitle(QApplication::translate("MainWindow", "\351\201\270\345\226\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
