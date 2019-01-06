#ifndef GAMECONTROLLER_H
#define GAMECONTROLLER_H

#include "screencontroller.h"
#include "ui_screencontroller.h"
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
    void GoToMainScreen(Ui::screencontroller* groupBox);

    ScreenController* GetMainWindow();

    static GameController* GetInstance();
private:
    GameController();
    static GameController* instance;
    void SpawnPlayer(QGroupBox* parent);

    QGraphicsView* graphicsView;

    ScreenController homeScreenController;
    Player* player;
    bool isMainGameActive;
    GameUi* gameUi;
    GameModel* gameModel;
    EnemyFactory* enemyFactory;

};

#endif // GAMECONTROLLER_H
