#include <QApplication>
#include "gamecontroller.h"
#include "inputmanager.h"
#include "constants.h"
#include <QTimer>


void RunGameLoop(){
    QTimer::singleShot(GameDeltaTime * 1000, [=](){ // We need milliseconds
        InputManager::GetInstance()->TickUpdate(GameController::GetInstance()->GetMainWindow()->geometry());
        GameController::GetInstance()->TickUpdate();
        RunGameLoop();
    });
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    GameController::GetInstance()->StartGame();

    RunGameLoop();

    return a.exec();
}
