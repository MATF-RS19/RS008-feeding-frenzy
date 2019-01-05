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
    homescreencontroller::scene = new QGraphicsScene(0, 0, GameWindowWidth, GameWindowHeight);
    homescreencontroller::mainScene = new QGraphicsScene(0, 0, GameWindowWidth, GameWindowHeight);
    ui->howToPlayGroup->hide();
    ui->homeScreenGroup->show();
    ui->mainScreenGroup->hide();
}

void homescreencontroller::keyPressEvent(QKeyEvent *event)
{

}



void homescreencontroller::on_howtoplay_clicked()
{
    ui->howToPlayGroup->show();
    ui->homeScreenGroup->hide();
    ui->mainScreenGroup->hide();

}

void homescreencontroller::on_play_clicked()
{
    ui->howToPlayGroup->hide();
    ui->homeScreenGroup->hide();
    ui->mainScreenGroup->show();

    GameController::GetInstance()->GoToMainScreen(ui->mainScreenGroup);
}
