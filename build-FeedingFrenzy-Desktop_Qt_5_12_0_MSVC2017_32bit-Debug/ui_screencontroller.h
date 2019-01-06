/********************************************************************************
** Form generated from reading UI file 'screencontroller.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCREENCONTROLLER_H
#define UI_SCREENCONTROLLER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_screencontroller
{
public:
    QWidget *centralwidget;
    QGroupBox *homeScreenGroup;
    QLabel *howToPlayBg;
    QLabel *playBg;
    QPushButton *play;
    QPushButton *howtoplay;
    QGroupBox *howToPlayGroup;
    QWidget *howToPlayPopup;
    QGroupBox *mainScreenGroup;
    QWidget *background;
    QGroupBox *mainScreenUIGroup;
    QLabel *testLabel;
    QGroupBox *gameOverGroup;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *screencontroller)
    {
        if (screencontroller->objectName().isEmpty())
            screencontroller->setObjectName(QString::fromUtf8("screencontroller"));
        screencontroller->resize(788, 473);
        screencontroller->setAutoFillBackground(false);
        screencontroller->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(screencontroller);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        homeScreenGroup = new QGroupBox(centralwidget);
        homeScreenGroup->setObjectName(QString::fromUtf8("homeScreenGroup"));
        homeScreenGroup->setGeometry(QRect(0, 0, 800, 450));
        homeScreenGroup->setFocusPolicy(Qt::NoFocus);
        howToPlayBg = new QLabel(homeScreenGroup);
        howToPlayBg->setObjectName(QString::fromUtf8("howToPlayBg"));
        howToPlayBg->setEnabled(true);
        howToPlayBg->setGeometry(QRect(420, 210, 201, 131));
        howToPlayBg->setStyleSheet(QString::fromUtf8("image: url(:/images/Sea_shell_blue.png);"));
        playBg = new QLabel(homeScreenGroup);
        playBg->setObjectName(QString::fromUtf8("playBg"));
        playBg->setEnabled(true);
        playBg->setGeometry(QRect(170, 60, 201, 131));
        playBg->setStyleSheet(QString::fromUtf8("image: url(:/images/Sea_shell_blue.png);"));
        play = new QPushButton(homeScreenGroup);
        play->setObjectName(QString::fromUtf8("play"));
        play->setGeometry(QRect(200, 100, 131, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("MV Boli"));
        font.setPointSize(19);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        play->setFont(font);
        play->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"\n"
""));
        howtoplay = new QPushButton(homeScreenGroup);
        howtoplay->setObjectName(QString::fromUtf8("howtoplay"));
        howtoplay->setGeometry(QRect(440, 250, 151, 51));
        QFont font1;
        font1.setFamily(QString::fromUtf8("MV Boli"));
        font1.setPointSize(13);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        howtoplay->setFont(font1);
        howtoplay->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        howToPlayBg->raise();
        playBg->raise();
        howtoplay->raise();
        play->raise();
        howToPlayGroup = new QGroupBox(centralwidget);
        howToPlayGroup->setObjectName(QString::fromUtf8("howToPlayGroup"));
        howToPlayGroup->setGeometry(QRect(0, 0, 800, 450));
        howToPlayPopup = new QWidget(howToPlayGroup);
        howToPlayPopup->setObjectName(QString::fromUtf8("howToPlayPopup"));
        howToPlayPopup->setGeometry(QRect(100, 45, 600, 360));
        howToPlayPopup->setStyleSheet(QString::fromUtf8("background-image: url(:/images/how_to_play.png);"));
        mainScreenGroup = new QGroupBox(centralwidget);
        mainScreenGroup->setObjectName(QString::fromUtf8("mainScreenGroup"));
        mainScreenGroup->setGeometry(QRect(0, 0, 800, 450));
        background = new QWidget(centralwidget);
        background->setObjectName(QString::fromUtf8("background"));
        background->setGeometry(QRect(0, 0, 800, 450));
        background->setStyleSheet(QString::fromUtf8("background-image: url(:/images/background.jpg);"));
        mainScreenUIGroup = new QGroupBox(centralwidget);
        mainScreenUIGroup->setObjectName(QString::fromUtf8("mainScreenUIGroup"));
        mainScreenUIGroup->setGeometry(QRect(0, 0, 800, 450));
        testLabel = new QLabel(mainScreenUIGroup);
        testLabel->setObjectName(QString::fromUtf8("testLabel"));
        testLabel->setGeometry(QRect(70, 40, 111, 41));
        QPalette palette;
        QBrush brush(QColor(255, 255, 127, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        testLabel->setPalette(palette);
        QFont font2;
        font2.setPointSize(15);
        testLabel->setFont(font2);
        gameOverGroup = new QGroupBox(centralwidget);
        gameOverGroup->setObjectName(QString::fromUtf8("gameOverGroup"));
        gameOverGroup->setGeometry(QRect(0, 0, 800, 450));
        screencontroller->setCentralWidget(centralwidget);
        background->raise();
        howToPlayGroup->raise();
        homeScreenGroup->raise();
        mainScreenGroup->raise();
        mainScreenUIGroup->raise();
        gameOverGroup->raise();
        menubar = new QMenuBar(screencontroller);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 788, 21));
        screencontroller->setMenuBar(menubar);
        statusbar = new QStatusBar(screencontroller);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        statusbar->setEnabled(false);
        screencontroller->setStatusBar(statusbar);

        retranslateUi(screencontroller);

        QMetaObject::connectSlotsByName(screencontroller);
    } // setupUi

    void retranslateUi(QMainWindow *screencontroller)
    {
        screencontroller->setWindowTitle(QApplication::translate("screencontroller", "MainWindow", nullptr));
        homeScreenGroup->setTitle(QString());
        howToPlayBg->setText(QString());
        playBg->setText(QString());
        play->setText(QApplication::translate("screencontroller", "Play", nullptr));
        howtoplay->setText(QApplication::translate("screencontroller", "How to play", nullptr));
        howToPlayGroup->setTitle(QString());
        mainScreenGroup->setTitle(QString());
        mainScreenUIGroup->setTitle(QString());
        testLabel->setText(QApplication::translate("screencontroller", "TextLabel", nullptr));
        gameOverGroup->setTitle(QString());
    } // retranslateUi

};

namespace Ui {
    class screencontroller: public Ui_screencontroller {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCREENCONTROLLER_H