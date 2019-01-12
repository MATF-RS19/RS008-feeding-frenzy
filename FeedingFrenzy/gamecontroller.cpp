#include "gamecontroller.h"
#include <math.h>
#include<QTimer>
GameController* GameController::instance = nullptr;

GameController::GameController(){
    music1 = new QMediaPlayer();
    music2=new QMediaPlayer();
    biteSound = new QMediaPlayer();
    biteSound->setMedia(QUrl("qrc:/sounds/bite.wav"));
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
        GameController::player->TickUpdate(gameModel->playerSize);

        GameController::enemyFactory->TickUpdate();

        for(int i = 0; i < GameController::enemyFactory->numberOfEnemies; i++){
            auto enemy = GameController::enemyFactory->enemies[i];
            auto player = GameController::player;
            int xDist = enemy->x() - player->x();
            int yDist = enemy->y() - player->y();
            float distance = sqrt(xDist*xDist + yDist*yDist);

            if(distance < (player->getColliderSize() + enemy->getColliderSize()) / 2.0f){
                if(player->getSize() >= enemy->getSize()){//player can eat fish that is currently smaller than him
                    // Eat enemy fish
                    if(biteSound->state() == QMediaPlayer::PlayingState){//checking state of biting sound
                        biteSound->setPosition(0);                            //so the sound begin for another bite even if
                    }                                                  //wasn't over previous time
                    else if(biteSound->state()==QMediaPlayer::StoppedState)
                    {
                        biteSound->play();
                    }
                    GameController::enemyFactory->RemoveEnemyAtIndex(i);//the enemy fish which we currently can eat
                    i--;                                                //has been eaten,so it desapears
                    gameModel->OnFishEaten(enemy->getType());

                    if(gameModel->fishConsumed >= gameModel->fishNeeded){
                        GameController::isMainGameActive = false;
                        GameController::enemyFactory->Clear();
                        GameController::player->close();
                        GameController::homeScreenController.GoToGameOverScreen(true, gameModel->score);
                    }
                }
                else{
                    // Get eaten
                    biteSound->play();
                    gameModel->lives--;
                    GameController::player->setXY(GameWindowWidth/2, 0);

                    if(gameModel->lives == 0){
                        GameController::isMainGameActive = false;
                        GameController::enemyFactory->Clear();
                        GameController::player->close();
                        GameController::homeScreenController.GoToGameOverScreen(false, gameModel->score);
                    }
                }
            }
        }

        GameController::gameUi->UpdateUi(GameController::gameModel);
    }

}

void GameController::StartGame(){
    //enabled sound for homescreen
    QMediaPlaylist *playlist = new QMediaPlaylist();
    playlist->addMedia(QUrl("qrc:/sounds/menu.mp3"));
    playlist->setPlaybackMode(QMediaPlaylist::Loop);
    music1->setPlaylist(playlist);
    playlist->setCurrentIndex(0);
    music1->play();

    GameController::homeScreenController.show();
}

void GameController::InitializeMainScreen(Ui::screencontroller* ui){
    music1->stop();
    //enabled sound for homescreen
    QMediaPlaylist *playlist = new QMediaPlaylist();
    playlist->addMedia(QUrl("qrc:/sounds/mainTheme.mp3"));
    playlist->setPlaybackMode(QMediaPlaylist::Loop);
    music2->setPlaylist(playlist);
    playlist->setCurrentIndex(0);
    music2->play();

    GameController::isMainGameActive = true;
    GameController::gameUi = new GameUi(ui);
    GameController::gameModel = new GameModel();
    GameController::enemyFactory = new EnemyFactory(ui);

    // create an item to add to the scene
    GameController::SpawnPlayer(ui->mainScreenGroup);
}

void GameController::SpawnPlayer(QGroupBox* parent){
    QLabel* playerWidget = new QLabel(parent);
    playerWidget->show();
    GameController::player = new Player(playerWidget,
                                        GameController::gameModel->playerSize,
                                        GameController::gameModel->playerSpeed);
}

ScreenController* GameController::GetMainWindow(){
    return &homeScreenController;
}
