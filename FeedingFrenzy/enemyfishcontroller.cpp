#include "enemyfishcontroller.h"
#include <QVector2D>
#include <QDebug>

EnemyFishController::EnemyFishController(QLabel* image, int size, int speed, QPointF startPos, QPointF targetPosition) :
    image(image), size(size), speed(speed), startPos(startPos), targetPos(targetPosition), hasArrivedAtTargetPosition(false)
{
    //Set fish type according to size
    if(size == FishSizes[0]){
        type = SmallestYellow;
    }
    else if(size == FishSizes[1]){
        type = SmallOrange;
    }
    else if(size == FishSizes[2]){
        type = BigGreen;
    }
    else{
        type = BiggestBlue;
    }

    pix = QPixmap(":/images/fish" + QString::number((int)type) + ".png");

    image->setGeometry(0, 0, sizeMultiplier() * pix.width(), sizeMultiplier() * pix.height());

    image->setPixmap(pix.scaled(sizeMultiplier() * pix.width(), sizeMultiplier() * pix.height(), Qt::KeepAspectRatio));
    image->move(startPos.x(), startPos.y());
};

void EnemyFishController::movePlayer()
{
    if(hasArrivedAtTargetPosition) return;

    QPointF currentPos = EnemyFishController::image->pos();
    QPointF targetPos = EnemyFishController::targetPos;

    if(QVector2D(targetPos - currentPos).length() < GameDeltaTime * speed){
        image->move(targetPos.x(), targetPos.y());
        hasArrivedAtTargetPosition = true;
    }
    else{
        QVector2D deltaPos = QVector2D(targetPos - currentPos).normalized() * speed * GameDeltaTime;
        QPointF finalPos = currentPos + deltaPos.toPointF();
        image->move(finalPos.x(), finalPos.y());
    }

    if(targetPos.x() < currentPos.x()){
        image->setPixmap(pix.transformed(QTransform().scale(-sizeMultiplier(), sizeMultiplier())));
    }
    else{
        image->setPixmap(pix.transformed(QTransform().scale(sizeMultiplier(), sizeMultiplier())));
    }
}

int EnemyFishController::x()
{
    return image->pos().x() + width() / 2;
}

int EnemyFishController::y()
{
    return image->pos().y() + height() / 2;
}

int EnemyFishController::getSize(){
    return size;
}

int EnemyFishController::getColliderSize(){
    return height();
}

float EnemyFishController::sizeMultiplier(){
    return (float)size / pix.width();
}

int EnemyFishController::width(){
    return (int)(sizeMultiplier() * pix.width());
}

int EnemyFishController::height(){
    return (int)(sizeMultiplier() * pix.height());
}

FishType EnemyFishController::getType(){
    return type;
}

void EnemyFishController::close()
{
    image->close();
    image = nullptr;
}

void EnemyFishController::TickUpdate()
{
    movePlayer();
};
