#include "screencontroller.h"
#include "ui_screencontroller.h"
#include "gamecontroller.h"
#include "constants.h"
#include <QPixmap>
#include <iostream>
#include <QMediaPlayer>


ScreenController::ScreenController(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::screencontroller)
{
    ui->setupUi(this);
    Init();
}

ScreenController::~ScreenController()
{
    delete ui;
}

void ScreenController::Init()
{
    setWindowTitle("Feeding Frenzy");
    this->setFixedSize(GameWindowWidth, GameWindowHeight); //screen size is fixed

    ui->statusbar->hide();
    ui->menubar->hide();

    button = new QMediaPlayer();//initializing sound for button click
    button->setMedia(QUrl("qrc:/sounds/button.wav"));

    ScreenController::SwitchScreen(Home);
}

void ScreenController::GoToGameOverScreen(bool hasWon, int score){
    ScreenController::SwitchScreen(GameOver);

    //Setup UI for game over
    if(hasWon){
        ui->result->setText("Congratulations, you won!");
    } else {
        ui->result->setText("Sorry, you lost!");
    }
    ui->yourscore->setText("Your score: " + QString::number(score));
}

void ScreenController::on_howtoplay_clicked()
{
    button->play();
    ScreenController::SwitchScreen(HowToPlay);
}

void ScreenController::on_play_clicked()
{
    button->play();
    ScreenController::SwitchScreen(Main);
    GameController::GetInstance()->InitializeMainScreen(ui);
}

void ScreenController::SwitchScreen(ScreenType screen)
{
    //at first everything is hidden and then deppending on 'screen' certain  group is shown
    ui->howToPlayGroup->hide();
    ui->homeScreenGroup->hide();
    ui->mainScreenGroup->hide();
    ui->mainScreenUIGroup->hide();
    ui->gameOverGroup->hide();

    switch(screen){
    case Home:
        ui->homeScreenGroup->show();
        break;
    case HowToPlay:
        ui->howToPlayGroup->show();
        break;
    case Main:
        ui->mainScreenGroup->show();
        ui->mainScreenUIGroup->show();
        break;
    case GameOver:
        ui->gameOverGroup->show();
        break;
    }
}

void ScreenController::on_esc_clicked()
{
    button->play();
    ScreenController::SwitchScreen(Home);
}

void ScreenController::on_reset_clicked()
{
    button->play();
    ScreenController::SwitchScreen(Main);
    GameController::GetInstance()->InitializeMainScreen(ui);
}

void ScreenController::on_quit_clicked()
{
    button->play();
    this->close();
}

void ScreenController::on_QuitButton_clicked()
{
    button->play();
    this->close();
}
