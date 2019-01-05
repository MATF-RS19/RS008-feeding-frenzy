#include "inputmanager.h"
#include "constants.h"

InputManager* InputManager::instance = nullptr;

InputManager::InputManager(){

}

InputManager* InputManager::GetInstance(){
    if(instance == nullptr){
        instance = new InputManager();
    }
    return instance;
}

static int clamp(int number, int min, int max){
    if(number < min){
        number = min;
    }
    if(number > max){
        number = max;
    }
    return number;
}

void InputManager::TickUpdate(QRect mainScreenRect){
    QPoint globalCursorPos = QCursor::pos();
    int mouseScreen = qApp->desktop()->screenNumber(globalCursorPos);

    QRect mouseScreenGeometry = qApp->desktop()->screen(mouseScreen)->geometry();
    QPoint localCursorPos = globalCursorPos - mouseScreenGeometry.topLeft();

    auto cursorXPos = localCursorPos.x() - mainScreenRect.x();
    auto cursorYPos = localCursorPos.y() - mainScreenRect.y();

    InputManager::mousePos = QPoint(
                clamp(cursorXPos, 0, GameWindowWidth),
                clamp(cursorYPos, 0, GameWindowHeight)
                );

    //qDebug() << InputManager::mousePos.x() << " " << InputManager::mousePos.y();
}

QPoint InputManager::GetMousePos(){
    return InputManager::mousePos;
}
