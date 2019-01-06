#include "player.h"
#include <QVector2D>
#include <QDebug>
#include "inputmanager.h"

Player::Player(QLabel* image, int size, int speed) : image(image), size(size), speed(speed)
{
    Player::pix = QPixmap(":/images/player.png");
    image->setPixmap(pix.scaled(size, size, Qt::KeepAspectRatio));
    image->move(GameWindowWidth/2, GameWindowHeight/2);
};

void Player::movePlayer()
{
    QPointF currentPos = Player::image->pos();
    QPointF targetPos = InputManager::GetInstance()->GetMousePos() - QPointF(size/2, size/2);

    if(QVector2D(targetPos - currentPos).length() < GameDeltaTime * Player::speed){
        Player::image->move(targetPos.x(), targetPos.y());
    }
    else{
        QVector2D deltaPos = QVector2D(targetPos - currentPos).normalized() * Player::speed * GameDeltaTime;
        QPointF finalPos = currentPos + deltaPos.toPointF();
        Player::image->move(finalPos.x(), finalPos.y());
    }

    if(targetPos.x() < currentPos.x()){
        Player::image->setPixmap(pix.transformed(QTransform().scale(-1 * (float)size / pix.width(), 1 * (float)size / pix.height())));
    }
    else if (targetPos.x() > currentPos.x()){
        Player::image->setPixmap(pix.transformed(QTransform().scale(1 * (float)size / pix.width(), 1 * (float)size / pix.height())));
    }
    else{
        // Fish orientation will stay as last frame
    }
}

int Player::x()
{
    return Player::image->x();
}

int Player::y()
{
    return Player::image->y();
}

int Player::getSize()
{
    return Player::size;
}

void Player::TickUpdate()
{
    Player::movePlayer();
};
