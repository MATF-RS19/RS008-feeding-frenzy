#ifndef ENEMYFISHCONTROLLER_H
#define ENEMYFISHCONTROLLER_H

#include "constants.h"
#include <QLabel>

class EnemyFishController {
public:
    EnemyFishController(QLabel* image, int size, int speed, QPointF startPos, QPointF targetPos);
    void TickUpdate();
private:
    void movePlayer();
    QPixmap pix;
    QLabel* image;
    int size;
    int speed;
    QPointF startPos;
    QPointF targetPos;
};

#endif // ENEMYFISHCONTROLLER_H
