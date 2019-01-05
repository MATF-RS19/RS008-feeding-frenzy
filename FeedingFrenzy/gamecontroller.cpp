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
    qDebug() << "GO TO MAIN SCREEN";
    GameController::homeScreenController.close();
    GameController::graphicsView->setScene(GameController::mainScreenController.GetScene());
    GameController::graphicsView->show();
}

QGraphicsView* GameController::GetGraphicsView(){
    return GameController::graphicsView;
}
