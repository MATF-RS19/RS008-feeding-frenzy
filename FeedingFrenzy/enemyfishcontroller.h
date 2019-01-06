#ifndef ENEMYFISHCONTROLLER_H
#define ENEMYFISHCONTROLLER_H

#include "constants.h"
#include "gamemodel.h"
#include <QLabel>

class EnemyFishController {
public:
    EnemyFishController(QLabel* image, int size, int speed, QPointF startPos, QPointF targetPosition);
    void TickUpdate();
    int x();
    int y();
    int getSize();
    int getColliderSize();
    FishType getType();
    void close();
    bool hasArrivedAtTargetPosition;
private:
    void movePlayer();
    float sizeMultiplier();
    int width();
    int height();
    QPixmap pix;
    QLabel* image;
    FishType type;
    int size;
    int speed;
    QPointF startPos;
    QPointF targetPos;
};

#endif // ENEMYFISHCONTROLLER_H
