#ifndef MAINSCREENCONTROLLER_H
#define MAINSCREENCONTROLLER_H

#include "constants.h"
#include "player.h"
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsRectItem>
#include <QDebug>
#include <QBrush>
#include <QImage>


class MainScreenController{
public:
    MainScreenController();
    void TickUpdate();
    QGraphicsScene* GetScene();
private:
    void Init();
    QGraphicsScene* scene;
    Player* player;
};

#endif // MAINSCREENCONTROLLER_H
