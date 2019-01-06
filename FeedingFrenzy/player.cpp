#include "player.h"
#include <QVector2D>
#include <QDebug>
#include "inputmanager.h"

Player::Player(QLabel* image, int size, int speed) : image(image), size(size), speed(speed)
{
    Player::pix = QPixmap(":/images/player.png");

    image->setGeometry(0, 0, sizeMultiplier() * pix.width(), sizeMultiplier() * pix.height());
    image->setPixmap(pix.scaled(sizeMultiplier() * pix.width(), sizeMultiplier() * pix.height(), Qt::KeepAspectRatio));
    image->move(GameWindowWidth/2, GameWindowHeight/2);
};

void Player::movePlayer()
{
    QPointF currentPos = image->pos();
    QPointF targetPos = InputManager::GetInstance()->GetMousePos() - QPointF(width()/2, height()/2);

    if(QVector2D(targetPos - currentPos).length() < GameDeltaTime * speed){
        image->move(targetPos.x(), targetPos.y());
    }
    else{
        QVector2D deltaPos = QVector2D(targetPos - currentPos).normalized() * speed * GameDeltaTime;
        QPointF finalPos = currentPos + deltaPos.toPointF();
        image->move(finalPos.x(), finalPos.y());
    }

    if(targetPos.x() < currentPos.x()){
        image->setPixmap(pix.transformed(QTransform().scale(-sizeMultiplier(), sizeMultiplier())));
    }
    else if (targetPos.x() > currentPos.x()){
        image->setPixmap(pix.transformed(QTransform().scale(sizeMultiplier(), sizeMultiplier())));
    }
    else{
        // Fish orientation will stay as last frame
    }
}

int Player::x()
{
    return image->x() + size/2;
}

int Player::y()
{
    return image->y() + size/2;
}

int Player::getSize()
{
    return size;
}

int Player::getColliderSize()
{
    return height();
}

float Player::sizeMultiplier(){
    return (float)size / pix.width();
}

int Player::width(){
    return (int)(sizeMultiplier() * pix.width());
}

int Player::height(){
    return (int)(sizeMultiplier() * pix.height());
}

void Player::TickUpdate(int playerSize)
{
    size = playerSize;
    movePlayer();
    image->setGeometry(image->x(), image->y(), sizeMultiplier() * pix.width(), sizeMultiplier() * pix.height());
};
