#include <QApplication>
#include "gamecontroller.h"
//#include "homescreencontroller.h"
#include <QTimer>
#include <QPoint>
#include <QDesktopWidget>

#include <iostream>

void printMousePos(){
    QTimer::singleShot(16, [=](){
        QPoint globalCursorPos = QCursor::pos();
        int mouseScreen = qApp->desktop()->screenNumber(globalCursorPos);

        QRect mouseScreenGeometry = qApp->desktop()->screen(mouseScreen)->geometry();
        QPoint localCursorPos = globalCursorPos - mouseScreenGeometry.topLeft();

        qDebug() << localCursorPos.x() << " " << localCursorPos.y();
        printMousePos();
    });
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    GameController::GetInstance()->StartGame();

    QTimer::singleShot(2000, [=](){
        GameController::GetInstance()->GoToMainScreen();
    });

    //printMousePos();

    return a.exec();
}
