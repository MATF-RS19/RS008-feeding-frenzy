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
        GameController::gameModel->score ++;
        GameController::gameUi->UpdateUi(GameController::gameModel);
    }

}

void GameController::StartGame(){
    GameController::homeScreenController.show();
}

void GameController::GoToMainScreen(Ui::homescreencontroller* ui){
    // create an item to add to the scene
    QLabel* playerWidget = new QLabel(ui->mainScreenGroup);
    playerWidget->setGeometry(0,0,75,75);
    playerWidget->show();
    GameController::player = new Player(playerWidget, 75, 500);
    GameController::isMainGameActive = true;
    GameController::gameUi = new GameUi(ui);
    GameController::gameModel = new GameModel();
}

homescreencontroller* GameController::GetMainWindow(){
    return &homeScreenController;
}
