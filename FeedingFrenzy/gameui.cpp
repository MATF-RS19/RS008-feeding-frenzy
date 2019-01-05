
#include "gameui.h"

GameUi::GameUi(Ui::homescreencontroller *gameUi) : ui (gameUi)
{

}

void GameUi::UpdateUi(GameModel *model)
{
    GameUi::ui->testLabel->setText(QString::number(model->score));
}
