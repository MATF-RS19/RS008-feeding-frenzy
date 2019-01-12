#include "constants.h"
#include "gameui.h"
#include <QDebug>

GameUi::GameUi(Ui::screencontroller *gameUi) : ui (gameUi)
{
    upgrade_sound = new QMediaPlayer();
    upgrade_sound->setMedia(QUrl("qrc:/sounds/upgrade.wav"));//setting sound for click
    sign1=0;
    sign2=0;
    sign3=0;
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

    GameUi::ui->fish1->hide();
    GameUi::ui->fish2->hide();
    GameUi::ui->fish3->hide();
    GameUi::ui->fish4->hide();

    if(model->playerSize == FishSizes[0]){//you can only eat yellow fish,she appears on the proggres bar
        GameUi::ui->fish1->show();
    }

    if(model->playerSize == FishSizes[1]){//now you can eat red fish too
        if(sign1==0){
            upgrade_sound->play();
            sign1++;
        }
        GameUi::ui->fish1->show();
        GameUi::ui->fish2->show();
    }

    if(model->playerSize == FishSizes[2]){//now you can eat green fish too
        if(sign2==0){
            upgrade_sound->play();
            sign2++;
        }
        GameUi::ui->fish1->show();
        GameUi::ui->fish2->show();
        GameUi::ui->fish3->show();
    }


    if(model->playerSize == FishSizes[3]){//now you can eat every fish there is
        if(sign3==0){
            upgrade_sound->play();
            sign3++;
        }
        GameUi::ui->fish1->show();
        GameUi::ui->fish2->show();
        GameUi::ui->fish3->show();
        GameUi::ui->fish4->show();
    }


    int percentageCompleted = (int)(100*(model->fishConsumed / (float)model->fishNeeded));
    GameUi::ui->progressBar->setValue(percentageCompleted);
}
