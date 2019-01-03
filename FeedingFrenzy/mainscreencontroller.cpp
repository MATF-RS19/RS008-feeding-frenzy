#include "mainscreencontroller.h"
#include <QBrush>
#include <QImage>

MainScreenController::MainScreenController() {
    Init();
}

void MainScreenController::Init()
{
    MainScreenController::scene = new QGraphicsScene(0, 0, GameWindowWidth, GameWindowHeight);
    MainScreenController::scene->setBackgroundBrush(QBrush(QImage(":/images/background.jpg")));

    // create an item to add to the scene
    MainScreenController::player = new Player();

    // add the item to the scene
    MainScreenController::scene->addItem(player);
}

QGraphicsScene *MainScreenController::GetScene()
{
    return MainScreenController::scene;
}
