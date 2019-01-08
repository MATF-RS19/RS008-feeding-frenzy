#include "gamemodel.h"
#include "constants.h"
#include <QDebug>

GameModel::GameModel()
{
    GameModel::playerSize = SizeMilestones[0];
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

    if(fishConsumed < FistEatenToIncreaseSize[0]){
        playerSize = SizeMilestones[0];
    }
    else if(fishConsumed < FistEatenToIncreaseSize[1]){
        playerSize = SizeMilestones[1];
    }
    else if(fishConsumed < FistEatenToIncreaseSize[2]){
        playerSize = SizeMilestones[2];
    }
    else {
        playerSize = SizeMilestones[3];
    }

}

bool GameModel::HasWon()
{
    return fishConsumed > fishNeeded;
}
