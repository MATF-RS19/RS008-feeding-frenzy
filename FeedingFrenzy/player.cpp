#include "player.h"
#include <QVector2D>

Player::Player(int size)
{
    Player::size = size;

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

    QVector2D deltaPos = QVector2D(targetPos - currentPos).normalized() * 500 * GameDeltaTime;
    setPos(currentPos + deltaPos.toPointF());

    qDebug() << pos().x() << " " << size/2;

    //setPos(pos() + QPointF(-size/2, -size/2));


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
