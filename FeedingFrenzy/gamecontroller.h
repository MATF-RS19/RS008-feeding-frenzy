#ifndef GAMECONTROLLER_H
#define GAMECONTROLLER_H

#include "homescreencontroller.h"
#include "player.h"
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsRectItem>
#include <QDebug>
#include <QGroupBox>
#include <QLabel>

class GameController{
public:
    void Init();
    void TickUpdate();
    void StartGame();
    void GoToMainScreen(QGroupBox* groupBox);

    homescreencontroller* GetMainWindow();

    static GameController* GetInstance();
private:
    GameController();
    static GameController* instance;

    QGraphicsView* graphicsView;

    homescreencontroller homeScreenController;
    Player* player;
    bool isMainGameActive;
};

#endif // GAMECONTROLLER_H
