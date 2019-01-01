#include <QApplication>
#include "gamecontroller.h"
//#include "homescreencontroller.h"

#include <iostream>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    GameController::GetInstance()->StartGame();

    return a.exec();
}
