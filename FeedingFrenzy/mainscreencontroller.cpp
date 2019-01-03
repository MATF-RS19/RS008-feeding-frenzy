#include "mainscreencontroller.h"

MainScreenController::MainScreenController() {
    Init();
}

void MainScreenController::TickUpdate(){
    MainScreenController::player->TickUpdate();
}

void MainScreenController::Init()
{
    MainScreenController::scene = new QGraphicsScene(0, 0, GameWindowWidth, GameWindowHeight);
    MainScreenController::scene->setBackgroundBrush(QBrush(QImage(":/images/background.jpg")));

    // create an item to add to the scene
    MainScreenController::player = new Player(75);

    // add the item to the scene
    MainScreenController::scene->addItem(player);
}

QGraphicsScene *MainScreenController::GetScene()
{
    return MainScreenController::scene;
}
