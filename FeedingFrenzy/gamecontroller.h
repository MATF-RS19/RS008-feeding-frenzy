#ifndef GAMECONTROLLER_H
#define GAMECONTROLLER_H

#include "homescreencontroller.h"
#include "mainscreencontroller.h"
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsRectItem>
#include <QDebug>

class GameController{
public:
    void Init();
    void TickUpdate();
    void StartGame();
    void GoToMainScreen();

    QGraphicsView* GetGraphicsView();

    static GameController* GetInstance();
private:
    GameController();
    static GameController* instance;

    QGraphicsView* graphicsView;

    HomeScreenController homeScreenController;
    MainScreenController mainScreenController;
};

#endif // GAMECONTROLLER_H
