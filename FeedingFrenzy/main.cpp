#include <QApplication>
#include "gamecontroller.h"
//#include "homescreencontroller.h"
#include <QTimer>

#include <iostream>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    GameController::GetInstance()->StartGame();

    QTimer::singleShot(2000, [=](){
        GameController::GetInstance()->GoToMainScreen();
    });

    return a.exec();
}
