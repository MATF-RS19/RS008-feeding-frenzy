#ifndef GAMEUI_H
#define GAMEUI_H

#include "gamemodel.h"
#include "ui_screencontroller.h"
#include <QMediaPlayer>


class GameUi {
public:
    GameUi(Ui::screencontroller* gameUi);
    void UpdateUi(GameModel* model);
private:
    int sign1,sign2,sign3;
    QMediaPlayer *upgrade_sound;
    Ui::screencontroller* ui;
};

#endif // GAMEUI_H
