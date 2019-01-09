
#include "gameui.h"
#include <QDebug>

GameUi::GameUi(Ui::screencontroller *gameUi) : ui (gameUi)
{

}

void GameUi::UpdateUi(GameModel *model)
{
    GameUi::ui->scoreLabel->setText("Score: " + QString::number(model->score));

    GameUi::ui->live1->hide();
    GameUi::ui->live2->hide();
    GameUi::ui->live3->hide();



    if(model->lives == 1){
        GameUi::ui->live1->show();

    }

    if(model->lives == 2){
        GameUi::ui->live1->show();
        GameUi::ui->live2->show();
    }

    if(model->lives == 3){
        GameUi::ui->live1->show();
        GameUi::ui->live2->show();
        GameUi::ui->live3->show();
    }



    int percentageCompleted = (int)(100*(model->fishConsumed / (float)model->fishNeeded));
    qDebug() << percentageCompleted;
    GameUi::ui->progressBar->setValue(percentageCompleted);
}
