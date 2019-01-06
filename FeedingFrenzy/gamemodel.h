#ifndef GAMEMODEL_H
#define GAMEMODEL_H

enum FishType{
    SmallestYellow = 0,
    SmallOrange = 1,
    BigGreen = 2,
    BiggestBlue = 3
};

class GameModel {
public:
    GameModel();

    int score;
    float fishConsumed;
    float fishNeeded;

    int playerSize;
    int playerSpeed;

    void OnFishEaten(FishType type);
    bool HasWon();
private:
};

#endif // GAMEMODEL_H
