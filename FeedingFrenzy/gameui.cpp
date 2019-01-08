
#include "gameui.h"
#include <QDebug>

GameUi::GameUi(Ui::screencontroller *gameUi) : ui (gameUi)
{

}

void GameUi::UpdateUi(GameModel *model)
{
    GameUi::ui->scoreLabel->setText("Score: " + QString::number(model->score));

    if(model->lives == 1){
        GameUi::ui->live2->hide();
        GameUi::ui->live3->hide();
    }

    if(model->lives == 2){
        GameUi::ui->live3->hide();
    }
    int percentageCompleted = (int)(100*(model->fishConsumed / (float)model->fishNeeded));
    qDebug() << percentageCompleted;
    GameUi::ui->progressBar->setValue(percentageCompleted);
}
