#ifndef PLAYER_H
#define PLAYER_H

#include "constants.h"
#include <QLabel>

class Player {
public:
    Player(QLabel* image, int size, int speed);
    void TickUpdate(int playerSize);
    int x();
    int y();
    int getSize();
    void close();
    int getColliderSize();
private:
    void movePlayer();
    float sizeMultiplier();
    int width();
    int height();
    QPixmap pix;
    QLabel* image;
    int size;
    int speed;
};

#endif // PLAYER_H
