#include "homescreencontroller.h"
#include "ui_homescreencontroller.h"
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

void homescreencontroller::on_pushButton_play_clicked()
{
    std::cout << "**********************" << std::endl;
}

void homescreencontroller::on_pushButton_howtoplay_clicked()
{

}
