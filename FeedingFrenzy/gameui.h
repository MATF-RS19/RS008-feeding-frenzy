#ifndef GAMEUI_H
#define GAMEUI_H

#include "gamemodel.h"
#include "ui_screencontroller.h"


class GameUi {
public:
    GameUi(Ui::screencontroller* gameUi);
    void UpdateUi(GameModel* model);
private:
    Ui::screencontroller* ui;
};

#endif // GAMEUI_H
