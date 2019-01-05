#ifndef PLAYER_H
#define PLAYER_H

#include "constants.h"
#include <QLabel>

class Player {
public:
    Player(QLabel* image, int size, int speed);
    void TickUpdate();
    int x();
    int y();
private:
    void movePlayer();
    QPixmap pix;
    QLabel* image;
    int size;
    int speed;
};

#endif // PLAYER_H
