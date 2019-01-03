#ifndef PLAYER_H
#define PLAYER_H

#include <QGraphicsPixmapItem>

class Player: public QGraphicsPixmapItem {
public:
    Player();
    void TickUpdate();
private:
    void move();
};

#endif // PLAYER_H
