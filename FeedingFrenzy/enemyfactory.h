#ifndef ENEMYFACTORY_H
#define ENEMYFACTORY_H

#include "constants.h"
#include "enemyfishcontroller.h"
#include "ui_screencontroller.h"
#include <QLabel>
#include <QRandomGenerator>

class EnemyFactory {
public:
    EnemyFactory(Ui::screencontroller* ui);
    void TickUpdate();
    void RemoveEnemyAtIndex(int i);

    EnemyFishController* enemies[100];
    int numberOfEnemies;
private:

    void SpawnFish();
    void UpdateAllFish();

    Ui::screencontroller* ui;
    float secondsUntilNextRespawn;
};

#endif // ENEMYFACTORY_H
