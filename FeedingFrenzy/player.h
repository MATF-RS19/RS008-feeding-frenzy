#ifndef PLAYER_H
#define PLAYER_H

#include "constants.h"
#include <QGraphicsItem>
#include <QWidget>
#include <QGraphicsPixmapItem>
#include <QLabel>

class Player {
public:
    Player(QLabel* image, int size, int speed);
    void TickUpdate();
private:
    void movePlayer();
    QPixmap pix;
    QLabel* image;
    int size;
    int speed;
};

#endif // PLAYER_H
