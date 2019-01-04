#include "gamecontroller.h"

GameController* GameController::instance = nullptr;

GameController::GameController(){
    Init();
}

GameController* GameController::GetInstance(){
    if(instance == nullptr){
        instance = new GameController();
    }
    return instance;
}

void GameController::Init(){
    //GameController::homeScreenController.show();
    GameController::mainScreenController = MainScreenController();
    GameController::graphicsView  = new QGraphicsView();
}

void GameController::TickUpdate(){
    GameController::mainScreenController.TickUpdate();
}

void GameController::StartGame(){
    //GameController::graphicsView->setScene(GameController::homeScreenController.show());
    //GameController::graphicsView->show();
    GameController::homeScreenController.show();
}

void GameController::GoToMainScreen(){
    GameController::graphicsView->setScene(GameController::mainScreenController.GetScene());
    //qDebug() << "GEOMETRIJA PROZORA" << GameController::graphicsView->geometry();
}

QGraphicsView* GameController::GetGraphicsView(){
    return GameController::graphicsView;
}
