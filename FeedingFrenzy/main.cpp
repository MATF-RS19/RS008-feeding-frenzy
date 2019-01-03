#include <QApplication>
#include "gamecontroller.h"
#include "inputmanager.h"
#include "constants.h"
#include <QTimer>

#include <iostream>

void RunGameLoop(){
    QTimer::singleShot(GameDeltaTime, [=](){
        InputManager::GetInstance()->TickUpdate();
        RunGameLoop();
    });
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    GameController::GetInstance()->StartGame();

    QTimer::singleShot(2000, [=](){
        GameController::GetInstance()->GoToMainScreen();
    });

    RunGameLoop();

    return a.exec();
}
