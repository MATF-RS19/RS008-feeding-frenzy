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
#include <QtWidgets/QProgressBar>
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
    QPushButton *QuitButton;
    QLabel *QuitLb;
    QGroupBox *howToPlayGroup;
    QWidget *howToPlayPopup;
    QLabel *escBg;
    QPushButton *esc;
    QGroupBox *mainScreenGroup;
    QWidget *background;
    QGroupBox *mainScreenUIGroup;
    QLabel *lives;
    QLabel *Progress;
    QProgressBar *progressBar;
    QLabel *fish1;
    QLabel *Meal;
    QLabel *live1;
    QLabel *live3;
    QLabel *scoreLabel;
    QLabel *fish2;
    QLabel *live2;
    QLabel *fish4;
    QLabel *fish3;
    QGroupBox *gameOverGroup;
    QLabel *result;
    QLabel *yourscore;
    QLabel *resetBg;
    QLabel *quitBg;
    QPushButton *quit;
    QPushButton *reset;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *screencontroller)
    {
        if (screencontroller->objectName().isEmpty())
            screencontroller->setObjectName(QString::fromUtf8("screencontroller"));
        screencontroller->resize(1200, 680);
        screencontroller->setAutoFillBackground(false);
        screencontroller->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(screencontroller);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        homeScreenGroup = new QGroupBox(centralwidget);
        homeScreenGroup->setObjectName(QString::fromUtf8("homeScreenGroup"));
        homeScreenGroup->setGeometry(QRect(0, 0, 1200, 680));
        homeScreenGroup->setFocusPolicy(Qt::NoFocus);
        howToPlayBg = new QLabel(homeScreenGroup);
        howToPlayBg->setObjectName(QString::fromUtf8("howToPlayBg"));
        howToPlayBg->setEnabled(true);
        howToPlayBg->setGeometry(QRect(610, 230, 251, 171));
        howToPlayBg->setStyleSheet(QString::fromUtf8("image: url(:/images/Sea_shell_blue.png);"));
        playBg = new QLabel(homeScreenGroup);
        playBg->setObjectName(QString::fromUtf8("playBg"));
        playBg->setEnabled(true);
        playBg->setGeometry(QRect(300, 70, 261, 181));
        playBg->setStyleSheet(QString::fromUtf8("image: url(:/images/Sea_shell_blue.png);"));
        play = new QPushButton(homeScreenGroup);
        play->setObjectName(QString::fromUtf8("play"));
        play->setGeometry(QRect(360, 130, 131, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("MV Boli"));
        font.setPointSize(22);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        play->setFont(font);
        play->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"\n"
""));
        howtoplay = new QPushButton(homeScreenGroup);
        howtoplay->setObjectName(QString::fromUtf8("howtoplay"));
        howtoplay->setGeometry(QRect(640, 280, 191, 51));
        QFont font1;
        font1.setFamily(QString::fromUtf8("MV Boli"));
        font1.setPointSize(17);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        howtoplay->setFont(font1);
        howtoplay->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        QuitButton = new QPushButton(homeScreenGroup);
        QuitButton->setObjectName(QString::fromUtf8("QuitButton"));
        QuitButton->setGeometry(QRect(350, 450, 151, 41));
        QuitButton->setFont(font);
        QuitButton->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        QuitLb = new QLabel(homeScreenGroup);
        QuitLb->setObjectName(QString::fromUtf8("QuitLb"));
        QuitLb->setEnabled(true);
        QuitLb->setGeometry(QRect(340, 380, 181, 181));
        QuitLb->setStyleSheet(QString::fromUtf8("image: url(:/images/Sea_shell_blue.png);"));
        howToPlayBg->raise();
        playBg->raise();
        howtoplay->raise();
        play->raise();
        QuitLb->raise();
        QuitButton->raise();
        howToPlayGroup = new QGroupBox(centralwidget);
        howToPlayGroup->setObjectName(QString::fromUtf8("howToPlayGroup"));
        howToPlayGroup->setGeometry(QRect(0, 0, 1200, 680));
        howToPlayPopup = new QWidget(howToPlayGroup);
        howToPlayPopup->setObjectName(QString::fromUtf8("howToPlayPopup"));
        howToPlayPopup->setGeometry(QRect(300, 140, 600, 360));
        howToPlayPopup->setStyleSheet(QString::fromUtf8("background-image: url(:/images/how_to_play.png);"));
        escBg = new QLabel(howToPlayGroup);
        escBg->setObjectName(QString::fromUtf8("escBg"));
        escBg->setGeometry(QRect(360, 380, 131, 101));
        escBg->setStyleSheet(QString::fromUtf8("image: url(:/images/Sea_shell_blue.png);"));
        esc = new QPushButton(howToPlayGroup);
        esc->setObjectName(QString::fromUtf8("esc"));
        esc->setGeometry(QRect(380, 410, 91, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("MV Boli"));
        font2.setPointSize(13);
        font2.setBold(true);
        font2.setItalic(false);
        font2.setWeight(75);
        esc->setFont(font2);
        esc->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        mainScreenGroup = new QGroupBox(centralwidget);
        mainScreenGroup->setObjectName(QString::fromUtf8("mainScreenGroup"));
        mainScreenGroup->setGeometry(QRect(0, 0, 1200, 680));
        background = new QWidget(centralwidget);
        background->setObjectName(QString::fromUtf8("background"));
        background->setGeometry(QRect(0, 0, 1200, 680));
        background->setStyleSheet(QString::fromUtf8("background-image: url(:/images/background.jpg);"));
        mainScreenUIGroup = new QGroupBox(centralwidget);
        mainScreenUIGroup->setObjectName(QString::fromUtf8("mainScreenUIGroup"));
        mainScreenUIGroup->setGeometry(QRect(0, 0, 1200, 680));
        lives = new QLabel(mainScreenUIGroup);
        lives->setObjectName(QString::fromUtf8("lives"));
        lives->setGeometry(QRect(800, 0, 91, 40));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        lives->setPalette(palette);
        QFont font3;
        font3.setFamily(QString::fromUtf8("MV Boli"));
        font3.setPointSize(15);
        font3.setBold(true);
        font3.setWeight(75);
        lives->setFont(font3);
        Progress = new QLabel(mainScreenUIGroup);
        Progress->setObjectName(QString::fromUtf8("Progress"));
        Progress->setGeometry(QRect(0, 60, 121, 40));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Progress->setPalette(palette1);
        Progress->setFont(font3);
        progressBar = new QProgressBar(mainScreenUIGroup);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(130, 70, 441, 31));
        QFont font4;
        font4.setPointSize(3);
        progressBar->setFont(font4);
        progressBar->setValue(65);
        progressBar->setTextVisible(false);
        progressBar->setInvertedAppearance(false);
        fish1 = new QLabel(mainScreenUIGroup);
        fish1->setObjectName(QString::fromUtf8("fish1"));
        fish1->setGeometry(QRect(130, 10, 51, 41));
        fish1->setStyleSheet(QString::fromUtf8("image: url(:/images/fish0.png);"));
        Meal = new QLabel(mainScreenUIGroup);
        Meal->setObjectName(QString::fromUtf8("Meal"));
        Meal->setGeometry(QRect(20, 10, 91, 41));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Meal->setPalette(palette2);
        Meal->setFont(font3);
        live1 = new QLabel(mainScreenUIGroup);
        live1->setObjectName(QString::fromUtf8("live1"));
        live1->setGeometry(QRect(900, 0, 51, 41));
        live1->setStyleSheet(QString::fromUtf8("\n"
"image: url(:/images/player.png);"));
        live3 = new QLabel(mainScreenUIGroup);
        live3->setObjectName(QString::fromUtf8("live3"));
        live3->setGeometry(QRect(1020, 0, 51, 41));
        live3->setStyleSheet(QString::fromUtf8("\n"
"image: url(:/images/player.png);"));
        scoreLabel = new QLabel(mainScreenUIGroup);
        scoreLabel->setObjectName(QString::fromUtf8("scoreLabel"));
        scoreLabel->setGeometry(QRect(800, 40, 300, 40));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        scoreLabel->setPalette(palette3);
        scoreLabel->setFont(font3);
        fish2 = new QLabel(mainScreenUIGroup);
        fish2->setObjectName(QString::fromUtf8("fish2"));
        fish2->setGeometry(QRect(220, 10, 51, 41));
        fish2->setStyleSheet(QString::fromUtf8("image: url(:/images/fish1.png);"));
        live2 = new QLabel(mainScreenUIGroup);
        live2->setObjectName(QString::fromUtf8("live2"));
        live2->setGeometry(QRect(960, 0, 51, 41));
        live2->setStyleSheet(QString::fromUtf8("\n"
"image: url(:/images/player.png);"));
        fish4 = new QLabel(mainScreenUIGroup);
        fish4->setObjectName(QString::fromUtf8("fish4"));
        fish4->setGeometry(QRect(430, 10, 121, 61));
        fish4->setStyleSheet(QString::fromUtf8("image: url(:/images/fish3.png)\n"
""));
        fish3 = new QLabel(mainScreenUIGroup);
        fish3->setObjectName(QString::fromUtf8("fish3"));
        fish3->setGeometry(QRect(310, 0, 101, 71));
        fish3->setStyleSheet(QString::fromUtf8("image: url(:/images/fish2.png)"));
        gameOverGroup = new QGroupBox(centralwidget);
        gameOverGroup->setObjectName(QString::fromUtf8("gameOverGroup"));
        gameOverGroup->setGeometry(QRect(0, 0, 1200, 680));
        result = new QLabel(gameOverGroup);
        result->setObjectName(QString::fromUtf8("result"));
        result->setGeometry(QRect(250, 30, 481, 121));
        QFont font5;
        font5.setFamily(QString::fromUtf8("MV Boli"));
        font5.setPointSize(21);
        font5.setBold(true);
        font5.setWeight(75);
        result->setFont(font5);
        yourscore = new QLabel(gameOverGroup);
        yourscore->setObjectName(QString::fromUtf8("yourscore"));
        yourscore->setGeometry(QRect(310, 150, 251, 81));
        QFont font6;
        font6.setFamily(QString::fromUtf8("MV Boli"));
        font6.setPointSize(13);
        yourscore->setFont(font6);
        resetBg = new QLabel(gameOverGroup);
        resetBg->setObjectName(QString::fromUtf8("resetBg"));
        resetBg->setGeometry(QRect(280, 270, 91, 71));
        resetBg->setStyleSheet(QString::fromUtf8("image: url(:/images/Sea_shell_blue.png);"));
        quitBg = new QLabel(gameOverGroup);
        quitBg->setObjectName(QString::fromUtf8("quitBg"));
        quitBg->setGeometry(QRect(440, 270, 91, 71));
        quitBg->setStyleSheet(QString::fromUtf8("image: url(:/images/Sea_shell_blue.png);"));
        quit = new QPushButton(gameOverGroup);
        quit->setObjectName(QString::fromUtf8("quit"));
        quit->setGeometry(QRect(450, 290, 71, 31));
        quit->setFont(font2);
        quit->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        reset = new QPushButton(gameOverGroup);
        reset->setObjectName(QString::fromUtf8("reset"));
        reset->setGeometry(QRect(290, 290, 71, 31));
        reset->setFont(font2);
        reset->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        screencontroller->setCentralWidget(centralwidget);
        background->raise();
        mainScreenGroup->raise();
        mainScreenUIGroup->raise();
        gameOverGroup->raise();
        howToPlayGroup->raise();
        homeScreenGroup->raise();
        menubar = new QMenuBar(screencontroller);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1200, 25));
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
        QuitButton->setText(QApplication::translate("screencontroller", "Quit", nullptr));
        QuitLb->setText(QString());
        howToPlayGroup->setTitle(QString());
        escBg->setText(QString());
        esc->setText(QApplication::translate("screencontroller", "Go Back", nullptr));
        mainScreenGroup->setTitle(QString());
        mainScreenUIGroup->setTitle(QString());
        lives->setText(QApplication::translate("screencontroller", "Lives:", nullptr));
        Progress->setText(QApplication::translate("screencontroller", "Progress", nullptr));
        fish1->setText(QString());
        Meal->setText(QApplication::translate("screencontroller", "Meal:", nullptr));
        live1->setText(QString());
        live3->setText(QString());
        scoreLabel->setText(QApplication::translate("screencontroller", "TextLabel", nullptr));
        fish2->setText(QString());
        live2->setText(QString());
        fish4->setText(QString());
        fish3->setText(QString());
        gameOverGroup->setTitle(QString());
        result->setText(QString());
        yourscore->setText(QString());
        resetBg->setText(QString());
        quitBg->setText(QString());
        quit->setText(QApplication::translate("screencontroller", "Quit", nullptr));
        reset->setText(QApplication::translate("screencontroller", "Reset", nullptr));
    } // retranslateUi

};

namespace Ui {
    class screencontroller: public Ui_screencontroller {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCREENCONTROLLER_H
