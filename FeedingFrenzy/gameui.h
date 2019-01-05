#ifndef GAMEUI_H
#define GAMEUI_H

#include "gamemodel.h"
#include "ui_homescreencontroller.h"


class GameUi {
public:
    GameUi(Ui::homescreencontroller* gameUi);
    void UpdateUi(GameModel* model);
private:
    Ui::homescreencontroller* ui;
};

#endif // GAMEUI_H
