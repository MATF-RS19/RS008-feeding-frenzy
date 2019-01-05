#include "gamecontroller.h"

GameController* GameController::instance = nullptr;

GameController::GameController(){

}

GameController* GameController::GetInstance(){
    if(instance == nullptr){
        instance = new GameController();
        instance->isMainGameActive = false;
    }
    return instance;
}

void GameController::TickUpdate(){
    if(GameController::isMainGameActive){
        GameController::player->TickUpdate();
    }

}

void GameController::StartGame(){
    GameController::homeScreenController.show();
}

void GameController::GoToMainScreen(QGroupBox* groupBox){
    // create an item to add to the scene
    QLabel* playerWidget = new QLabel(groupBox);
    playerWidget->setGeometry(0,0,75,75);
    playerWidget->show();
    GameController::player = new Player(playerWidget, 75, 500);
    GameController::isMainGameActive = true;



}

homescreencontroller* GameController::GetMainWindow(){
    return &homeScreenController;
}
