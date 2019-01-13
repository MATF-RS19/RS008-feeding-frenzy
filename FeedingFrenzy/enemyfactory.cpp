#include "enemyfactory.h"
#include <QDebug>

EnemyFactory::EnemyFactory(Ui::screencontroller* ui) : ui(ui), secondsUntilNextRespawn(0), numberOfEnemies(0)
{
}

void EnemyFactory::TickUpdate()
{
    secondsUntilNextRespawn -= GameDeltaTime;

    if(secondsUntilNextRespawn < 0){
        secondsUntilNextRespawn = MinimumDelayForFishToSpawn + QRandomGenerator::global()->bounded(MaximumDelayForFishToSpawn - MinimumDelayForFishToSpawn);
        SpawnFish();
    }

    UpdateAllFish();
}

void EnemyFactory::RemoveEnemyAtIndex(int i)
{
    enemies[i]->close();
    enemies[i] = nullptr;
    numberOfEnemies--;

    if(numberOfEnemies - i > 0){
        // If there are more enemies in the array, we take last one and put him on i-th place
        enemies[i] = enemies[numberOfEnemies];

    }
}

void EnemyFactory::Clear(){
    for(int i = 0; i < numberOfEnemies; i++){
        RemoveEnemyAtIndex(i);
        i--;
    }
}

void EnemyFactory::SpawnFish(){
    QLabel* enemyWidget = new QLabel(ui->mainScreenGroup);
    enemyWidget->show();

    int leftEdge = -MarginWidthForEnemySpawning;
    int rightEdge = GameWindowWidth + MarginWidthForEnemySpawning;

    int startY = QRandomGenerator::global()->bounded(GameWindowHeight);
    int targetY = QRandomGenerator::global()->bounded(GameWindowHeight);

    // Decide randomly if fish should start from left or right
    bool shouldStartFromLeft = QRandomGenerator::global()->bounded(1.0f) < 0.5f;

    QPointF startPoint = QPointF(shouldStartFromLeft ? leftEdge : rightEdge, startY);
    QPointF endPoint = QPointF(!shouldStartFromLeft ? leftEdge : rightEdge, targetY);

    int enemySize = FishSizes[QRandomGenerator::global()->bounded(4)];
    int enemySpeed = MinimumEnemyFishSpeed + QRandomGenerator::global()->bounded(MaximumEnemyFishSpeed - MinimumEnemyFishSpeed);
    EnemyFactory::enemies[EnemyFactory::numberOfEnemies] = new EnemyFishController(enemyWidget, enemySize, enemySpeed, startPoint, endPoint);
    EnemyFactory::numberOfEnemies++;
}

void EnemyFactory::UpdateAllFish()
{
    for(int i = 0; i < numberOfEnemies; i++){
        enemies[i]->TickUpdate();

        if(enemies[i]->hasArrivedAtTargetPosition)
        {
            RemoveEnemyAtIndex(i);
            i--;
        }
    }
}
