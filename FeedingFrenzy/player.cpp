#include "player.h"
#include <QVector2D>

Player::Player(int size, int speed) : size(size), speed(speed)
{
    Player::pix = QPixmap(":/images/player.png");
    setPixmap(pix.scaled(size, size, Qt::KeepAspectRatio));
    setPos(GameWindowWidth/2, GameWindowHeight/2);

};

void Player::move()
{
    QPointF currentPos = pos();
    QPointF targetPos = InputManager::GetInstance()->GetMousePos() - QPointF(size/2, size/2);

    if(QVector2D(targetPos - currentPos).length() < 5){
        return;
    }

    QVector2D deltaPos = QVector2D(targetPos - currentPos).normalized() * Player::speed * GameDeltaTime;
    setPos(currentPos + deltaPos.toPointF());

    if(targetPos.x() < currentPos.x()){
        setPixmap(pix.transformed(QTransform().scale(-1 * (float)size / pix.width(), 1 * (float)size / pix.height())));
    }
    else{
        setPixmap(pix.transformed(QTransform().scale(1 * (float)size / pix.width(), 1 * (float)size / pix.height())));
    }
}

void Player::TickUpdate()
{
    Player::move();
};
