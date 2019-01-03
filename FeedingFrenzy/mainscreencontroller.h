#ifndef MAINSCREENCONTROLLER_H
#define MAINSCREENCONTROLLER_H

#include "constants.h"
#include "player.h"
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsRectItem>
#include <QDebug>


class MainScreenController{
public:
    MainScreenController();
    QGraphicsScene* GetScene();
private:
    void Init();
    QGraphicsScene* scene;
    Player* player;
};

#endif // MAINSCREENCONTROLLER_H
