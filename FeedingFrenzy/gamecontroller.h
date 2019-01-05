#ifndef GAMECONTROLLER_H
#define GAMECONTROLLER_H

#include "homescreencontroller.h"
#include "ui_homescreencontroller.h"
#include "player.h"
#include "enemyfishcontroller.h"
#include "gameui.h"
#include "gamemodel.h"
#include "enemyfactory.h"
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
    void SpawnPlayer(QGroupBox* parent);

    QGraphicsView* graphicsView;

    homescreencontroller homeScreenController;
    Player* player;
    bool isMainGameActive;
    GameUi* gameUi;
    GameModel* gameModel;
    EnemyFactory* enemyFactory;

};

#endif // GAMECONTROLLER_H
