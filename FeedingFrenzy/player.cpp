#include "player.h"
#include "constants.h"
#include "inputmanager.h"
#include <QGraphicsItem>
#include <QPixmap>
Player::Player()
{
    QPixmap pix(":/images/player.png");
    setPixmap(pix.scaled(100, 100, Qt::KeepAspectRatio));
    setPos(GameWindowWidth/2, GameWindowHeight/2);

};

void Player::move()
{
    QPoint mousePos = InputManager::GetInstance()->GetMousePos();
    setPos(mousePos.x(), mousePos.y());
}

void Player::TickUpdate()
{
    Player::move();
};
