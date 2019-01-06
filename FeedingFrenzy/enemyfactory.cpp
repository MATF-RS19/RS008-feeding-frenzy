#include "enemyfactory.h"
#include <QDebug>

EnemyFactory::EnemyFactory(Ui::screencontroller* ui) : ui(ui)
{
    EnemyFactory::secondsUntilNextRespawn = 0;
    EnemyFactory::numberOfEnemies = 0;
}

void EnemyFactory::TickUpdate()
{
    EnemyFactory::secondsUntilNextRespawn -= GameDeltaTime;

    if(EnemyFactory::secondsUntilNextRespawn < 0){
        EnemyFactory::secondsUntilNextRespawn = 0.2f + QRandomGenerator::global()->bounded(1.0f);
        EnemyFactory::SpawnFish();
    }

    EnemyFactory::UpdateAllFish();
}

void EnemyFactory::RemoveEnemyAtIndex(int i)
{
    EnemyFactory::enemies[i]->close();
    EnemyFactory::enemies[i] = nullptr;
    EnemyFactory::numberOfEnemies--;

    if(EnemyFactory::numberOfEnemies - i > 0){
        // If there are more enemies in the array, we take last one and put him on i-th place
        EnemyFactory::enemies[i] = EnemyFactory::enemies[EnemyFactory::numberOfEnemies];

    }
}

void EnemyFactory::SpawnFish(){
    QLabel* enemyWidget = new QLabel(ui->mainScreenGroup);
    enemyWidget->setGeometry(0,0,75,75);
    enemyWidget->show();

    int leftEdge = -MarginWidthForEnemySpawning;
    int rightEdge = GameWindowWidth + MarginWidthForEnemySpawning;

    int startY = QRandomGenerator::global()->bounded(GameWindowHeight);
    int targetY = QRandomGenerator::global()->bounded(GameWindowHeight);

    bool shouldStartFromLeft = QRandomGenerator::global()->bounded(1.0f) < 0.5f;

    QPointF startPoint = QPointF(shouldStartFromLeft ? leftEdge : rightEdge, startY);
    QPointF endPoint = QPointF(!shouldStartFromLeft ? leftEdge : rightEdge, targetY);

    EnemyFactory::enemies[EnemyFactory::numberOfEnemies] =
            new EnemyFishController(enemyWidget, 50, 200, startPoint, endPoint);
    EnemyFactory::numberOfEnemies++;
}

void EnemyFactory::UpdateAllFish()
{
    for(int i = 0; i < EnemyFactory::numberOfEnemies; i++){
        EnemyFactory::enemies[i]->TickUpdate();

        int leftEdge = -MarginWidthForEnemyDestruction;
        int rightEdge = GameWindowWidth + MarginWidthForEnemyDestruction;

        if(EnemyFactory::enemies[i]->x() < leftEdge ||
           EnemyFactory::enemies[i]->x() > rightEdge)
        {
            EnemyFactory::RemoveEnemyAtIndex(i);
            i--;
        }
    }
}
