#ifndef GAMECONTROLLER_H
#define GAMECONTROLLER_H

#include "homescreencontroller.h"
#include "ui_homescreencontroller.h"
#include "player.h"
#include "gameui.h"
#include "gamemodel.h"
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
    void GoToMainScreen(Ui::homescreencontroller* groupBox);

    homescreencontroller* GetMainWindow();

    static GameController* GetInstance();
private:
    GameController();
    static GameController* instance;

    QGraphicsView* graphicsView;

    homescreencontroller homeScreenController;
    Player* player;
    bool isMainGameActive;
    GameUi* gameUi;
    GameModel* gameModel;

};

#endif // GAMECONTROLLER_H
