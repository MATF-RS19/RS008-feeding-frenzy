#include "gamemodel.h"
#include "constants.h"

GameModel::GameModel()
{
    GameModel::playerSize = PlayerStartSize;
    GameModel::playerSpeed = PlayerSpeed;

    GameModel::score = 0;
    GameModel::fishConsumed = 0;
    GameModel::fishNeeded = 50;
}
