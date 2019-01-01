#ifndef GAMECONTROLLER_H
#define GAMECONTROLLER_H

#include "homescreencontroller.h"
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsRectItem>

class GameController{
public:
    void Init();
    void StartGame();

    static GameController* GetInstance();

    int a;
private:
    GameController();
    static GameController* instance;

    QGraphicsView* graphicsView;

    HomeScreenController homeScreenController;
};

#endif // GAMECONTROLLER_H
