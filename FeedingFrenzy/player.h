#ifndef PLAYER_H
#define PLAYER_H

#include "constants.h"
#include "inputmanager.h"
#include <QGraphicsItem>
#include <QPixmap>
#include <QGraphicsPixmapItem>

class Player: public QGraphicsPixmapItem {
public:
    Player(int size, int speed);
    void TickUpdate();
private:
    void move();
    QPixmap pix;
    int size;
    int speed;
};

#endif // PLAYER_H
