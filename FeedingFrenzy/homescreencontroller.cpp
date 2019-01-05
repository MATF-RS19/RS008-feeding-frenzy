#include "homescreencontroller.h"
#include "ui_homescreencontroller.h"
#include "gamecontroller.h"
#include "constants.h"
#include <QPixmap>
#include <iostream>

homescreencontroller::homescreencontroller(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::homescreencontroller)
{
    ui->setupUi(this);
    Init();
}

homescreencontroller::~homescreencontroller()
{
    delete ui;
}

void homescreencontroller::Init()
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


void homescreencontroller::on_howtoplay_clicked()
{
    ui->howToPlayGroup->show();
    ui->homeScreenGroup->hide();
    ui->mainScreenGroup->hide();
    ui->mainScreenUIGroup->hide();

}

void homescreencontroller::on_play_clicked()
{
    ui->howToPlayGroup->hide();
    ui->homeScreenGroup->hide();
    ui->mainScreenGroup->show();
    ui->mainScreenUIGroup->show();

    GameController::GetInstance()->GoToMainScreen(ui);
}
