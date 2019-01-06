#include "enemyfishcontroller.h"
#include <QVector2D>
#include <QDebug>

EnemyFishController::EnemyFishController(QLabel* image, int size, int speed, QPointF startPos, QPointF targetPos) :
    image(image), size(size), speed(speed), startPos(startPos), targetPos(targetPos)
{
    EnemyFishController::pix = QPixmap(":/images/player.png");
    image->setPixmap(pix.scaled(size, size, Qt::KeepAspectRatio));
    image->move(EnemyFishController::startPos.x(), EnemyFishController::startPos.y());
};

void EnemyFishController::movePlayer()
{
    QPointF currentPos = EnemyFishController::image->pos();
    QPointF targetPos = EnemyFishController::targetPos;

    if(QVector2D(targetPos - currentPos).length() < GameDeltaTime * EnemyFishController::speed){
        EnemyFishController::image->move(targetPos.x(), targetPos.y());
    }
    else{
        QVector2D deltaPos = QVector2D(targetPos - currentPos).normalized() * EnemyFishController::speed * GameDeltaTime;
        QPointF finalPos = currentPos + deltaPos.toPointF();
        EnemyFishController::image->move(finalPos.x(), finalPos.y());
    }

    if(targetPos.x() < currentPos.x()){
        EnemyFishController::image->setPixmap(pix.transformed(QTransform().scale(-1 * (float)size / pix.width(), 1 * (float)size / pix.height())));
    }
    else{
        EnemyFishController::image->setPixmap(pix.transformed(QTransform().scale(1 * (float)size / pix.width(), 1 * (float)size / pix.height())));
    }
}

int EnemyFishController::x()
{
    return EnemyFishController::image->x();
}

int EnemyFishController::y()
{
    return EnemyFishController::image->y();
}

int EnemyFishController::getSize(){
    return EnemyFishController::size;
}

void EnemyFishController::close()
{
    EnemyFishController::image->close();
    EnemyFishController::image = nullptr;
}

void EnemyFishController::TickUpdate()
{
    EnemyFishController::movePlayer();
};
