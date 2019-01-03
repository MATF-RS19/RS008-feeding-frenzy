#include "mainscreencontroller.h"

MainScreenController::MainScreenController() {
    Init();
}

void MainScreenController::Init()
{
    MainScreenController::scene = new QGraphicsScene(0, 0, GameWindowWidth, GameWindowHeight);

    // create an item to add to the scene
    QGraphicsRectItem * rect = new QGraphicsRectItem();
    rect->setRect(0,0,50,50); // change the rect from 0x0 (default) to 100x100 pixels

    // add the item to the scene
    MainScreenController::scene->addItem(rect);
}

QGraphicsScene *MainScreenController::GetScene()
{
    return MainScreenController::scene;
}
