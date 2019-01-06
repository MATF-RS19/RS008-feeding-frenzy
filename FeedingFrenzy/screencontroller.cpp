#include "screencontroller.h"
#include "ui_screencontroller.h"
#include "gamecontroller.h"
#include "constants.h"
#include <QPixmap>
#include <iostream>

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
    this->setFixedSize(GameWindowWidth, GameWindowHeight);

    ui->statusbar->hide();
    ui->menubar->hide();

    ScreenController::SwitchScreen(Home);
}

void ScreenController::GoToGameOverScreen(){
    ScreenController::SwitchScreen(GameOver);


}

void ScreenController::on_howtoplay_clicked()
{
    ScreenController::SwitchScreen(HowToPlay);
}

void ScreenController::on_play_clicked()
{
    ScreenController::SwitchScreen(Main);
    GameController::GetInstance()->GoToMainScreen(ui);
}

void ScreenController::SwitchScreen(ScreenType screen)
{
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
