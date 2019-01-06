#include "screencontroller.h"
#include "ui_screencontroller.h"
#include "gamecontroller.h"
#include "constants.h"
#include <QPixmap>
#include <iostream>

screencontroller::screencontroller(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::screencontroller)
{
    ui->setupUi(this);
    Init();
}

screencontroller::~screencontroller()
{
    delete ui;
}

void screencontroller::Init()
{
    setWindowTitle("Feeding Frenzy");
    this->setFixedSize(GameWindowWidth, GameWindowHeight);

    ui->statusbar->hide();
    ui->menubar->hide();

    ui->howToPlayGroup->hide();
    ui->homeScreenGroup->show();
    ui->mainScreenGroup->hide();
    ui->mainScreenUIGroup->hide();
}


void screencontroller::on_howtoplay_clicked()
{
    ui->howToPlayGroup->show();
    ui->homeScreenGroup->hide();
    ui->mainScreenGroup->hide();
    ui->mainScreenUIGroup->hide();

}

void screencontroller::on_play_clicked()
{
    ui->howToPlayGroup->hide();
    ui->homeScreenGroup->hide();
    ui->mainScreenGroup->show();
    ui->mainScreenUIGroup->show();

    GameController::GetInstance()->GoToMainScreen(ui);
}
