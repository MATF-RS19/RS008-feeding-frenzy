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
    Init();
    ui->setupUi(this);

}

homescreencontroller::~homescreencontroller()
{
    delete ui;
}

void homescreencontroller::Init()
{
    homescreencontroller::scene = new QGraphicsScene(0, 0, GameWindowWidth, GameWindowHeight);

    homescreencontroller::scene->setBackgroundBrush(QBrush(QImage(":/images/background.jpg")));
    // create an item to add to the scene
   // QGraphicsRectItem * rect = new QGraphicsRectItem();
    //rect->setRect(0,0,100,100); // change the rect from 0x0 (default) to 100x100 pixels

    // add the item to the scene
    //homescreencontroller::scene->addItem(rect);
}

QGraphicsScene *homescreencontroller::GetScene()
{
    return homescreencontroller::scene;
}

void homescreencontroller::keyPressEvent(QKeyEvent *event)
{

}



void homescreencontroller::on_howtoplay_clicked()
{
    qDebug() << "ASD";
    QPixmap pix(":/images/how_to_play.png");
    ui->howToPlayGroup->show();
    ui->homeScreenGroup->hide();
    int w = ui->howToPlayText->width();
    int h = ui->howToPlayText->height();
    ui->howToPlayText->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));

}

void homescreencontroller::on_play_clicked()
{
    qDebug() << "ASD";
    GameController::GetInstance()->GoToMainScreen();
}
