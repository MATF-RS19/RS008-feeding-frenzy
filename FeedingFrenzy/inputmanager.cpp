#include "inputmanager.h"

InputManager* InputManager::instance = nullptr;

InputManager::InputManager(){

}

InputManager* InputManager::GetInstance(){
    if(instance == nullptr){
        instance = new InputManager();
    }
    return instance;
}

void InputManager::TickUpdate(){
    QPoint globalCursorPos = QCursor::pos();
    int mouseScreen = qApp->desktop()->screenNumber(globalCursorPos);

    QRect mouseScreenGeometry = qApp->desktop()->screen(mouseScreen)->geometry();
    QPoint localCursorPos = globalCursorPos - mouseScreenGeometry.topLeft();

    InputManager::mousePos = QPoint(
                localCursorPos.x() - GameController::GetInstance()->GetGraphicsView()->geometry().x(),
                localCursorPos.y() - GameController::GetInstance()->GetGraphicsView()->geometry().y()
                );

    qDebug() << InputManager::mousePos.x() << " " << InputManager::mousePos.y();
}

QPoint InputManager::GetMousePos(){
    return InputManager::mousePos;
}
