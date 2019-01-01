#include "homescreencontroller.h"

HomeScreenController::HomeScreenController() {
    Init();
}

void HomeScreenController::Init()
{
    HomeScreenController::scene = new QGraphicsScene(0, 0, 500, 500);

    // create an item to add to the scene
    QGraphicsRectItem * rect = new QGraphicsRectItem();
    rect->setRect(0,0,100,100); // change the rect from 0x0 (default) to 100x100 pixels

    // add the item to the scene
    HomeScreenController::scene->addItem(rect);
}

QGraphicsScene *HomeScreenController::GetScene()
{
    return HomeScreenController::scene;
}
