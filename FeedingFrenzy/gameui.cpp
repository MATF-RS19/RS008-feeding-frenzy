
#include "gameui.h"
#include <QDebug>

GameUi::GameUi(Ui::screencontroller *gameUi) : ui (gameUi)
{

}

void GameUi::UpdateUi(GameModel *model)
{
    GameUi::ui->scoreLabel->setText("Score: " + QString::number(model->score));

    int percentageCompleted = (int)(100*(model->fishConsumed / (float)model->fishNeeded));
    qDebug() << percentageCompleted;
    GameUi::ui->progressBar->setValue(percentageCompleted);
}
