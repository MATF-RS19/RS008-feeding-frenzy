#include "gamecontroller.h"
#include <math.h>

GameController* GameController::instance = nullptr;

GameController::GameController(){ }

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

        GameController::enemyFactory->TickUpdate();

        for(int i = 0; i < GameController::enemyFactory->numberOfEnemies; i++){
            auto enemy = GameController::enemyFactory->enemies[i];
            auto player = GameController::player;
            int xDist = enemy->x() - player->x();
            int yDist = enemy->y() - player->y();
            float distance = sqrt(xDist*xDist + yDist*yDist);

            if(distance < (player->getSize() + enemy->getSize()) / 2.0f){
                if(player->getSize() >= enemy->getSize()){
                    // Eat enemy fish
                    GameController::enemyFactory->RemoveEnemyAtIndex(i);
                    i--;
                }
                else{
                    // Get eaten
                    GameController::homeScreenController.GoToGameOverScreen();
                }
            }
        }

        GameController::gameModel->score ++;
        GameController::gameUi->UpdateUi(GameController::gameModel);
    }

}

void GameController::StartGame(){
    GameController::homeScreenController.show();
}

void GameController::GoToMainScreen(Ui::screencontroller* ui){
    GameController::isMainGameActive = true;
    GameController::gameUi = new GameUi(ui);
    GameController::gameModel = new GameModel();
    GameController::enemyFactory = new EnemyFactory(ui);

    // create an item to add to the scene
    GameController::SpawnPlayer(ui->mainScreenGroup);
}

void GameController::SpawnPlayer(QGroupBox* parent){
    QLabel* playerWidget = new QLabel(parent);
    playerWidget->setGeometry(0,0,GameController::gameModel->playerSize,GameController::gameModel->playerSize);
    playerWidget->show();
    GameController::player = new Player(playerWidget,
                                        GameController::gameModel->playerSize,
                                        GameController::gameModel->playerSpeed);
}

ScreenController* GameController::GetMainWindow(){
    return &homeScreenController;
}
