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
    QPixmap backgroundImage(":/images/background.jpg");
    backgroundImage = backgroundImage.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, backgroundImage);
    setPalette(palette);

    ui->howToPlayGroup->hide();
    ui->homeScreenGroup->show();
    ui->mainScreenGroup->hide();
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
