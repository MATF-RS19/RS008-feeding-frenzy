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
    //get cursor position
    QPoint globalCursorPos = QCursor::pos();

    auto cursorXPos = globalCursorPos.x() - mainScreenRect.x();
    auto cursorYPos = globalCursorPos.y() - mainScreenRect.y();

    InputManager::mousePos = QPoint(
                clamp(cursorXPos, 0, GameWindowWidth), //cursor position is limited to the game window
                clamp(cursorYPos, 0, GameWindowHeight)
                );
}

QPoint InputManager::GetMousePos(){
    return InputManager::mousePos;
}
