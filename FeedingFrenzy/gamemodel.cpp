#include "gamemodel.h"
#include "constants.h"
#include <QDebug>

GameModel::GameModel()
{
    GameModel::playerSize = FishSizes[0];
    GameModel::playerSpeed = PlayerSpeed;

    GameModel::lives = 3;
    GameModel::score = 0;
    GameModel::fishConsumed = 0.0f;
    GameModel::fishNeeded = FishNeededToWin;
}

void GameModel::OnFishEaten(FishType type)
{
    int fishValue = ((int)type) + 1;
    score += fishValue * 10;
    fishConsumed += fishValue / 2.0f;

    if(fishConsumed < FishEatenToIncreaseSize[0]){
        playerSize = FishSizes[0];
    }
    else if(fishConsumed < FishEatenToIncreaseSize[1]){
        playerSize = FishSizes[1];
    }
    else if(fishConsumed < FishEatenToIncreaseSize[2]){
        playerSize = FishSizes[2];
    }
    else {
        playerSize = FishSizes[3];
    }

}

bool GameModel::HasWon()
{
    return fishConsumed > fishNeeded;
}
