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
        GameController::enemy->TickUpdate();
        GameController::gameModel->score ++;
        GameController::gameUi->UpdateUi(GameController::gameModel);
    }

}

void GameController::StartGame(){
    GameController::homeScreenController.show();
}

void GameController::GoToMainScreen(Ui::homescreencontroller* ui){
    // create an item to add to the scene
    GameController::SpawnPlayer(ui->mainScreenGroup);

    QLabel* playerWidget2 = new QLabel(ui->mainScreenGroup);
    playerWidget2->setGeometry(0,0,75,75);
    playerWidget2->show();
    GameController::enemy = new EnemyFishController(playerWidget2, 50, 200, QPointF(-50, 50), QPointF(700, 300));

    GameController::isMainGameActive = true;
    GameController::gameUi = new GameUi(ui);
    GameController::gameModel = new GameModel();
}

void GameController::SpawnPlayer(QGroupBox* parent){
    QLabel* playerWidget = new QLabel(parent);
    playerWidget->setGeometry(0,0,75,75);
    playerWidget->show();
    GameController::player = new Player(playerWidget, 75, 500);
}

homescreencontroller* GameController::GetMainWindow(){
    return &homeScreenController;
}
