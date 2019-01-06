
#include "gameui.h"

GameUi::GameUi(Ui::screencontroller *gameUi) : ui (gameUi)
{

}

void GameUi::UpdateUi(GameModel *model)
{
    GameUi::ui->testLabel->setText(QString::number(model->score));
}
