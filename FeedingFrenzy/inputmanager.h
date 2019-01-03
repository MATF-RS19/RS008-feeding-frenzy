#ifndef INPUTMANAGER_H
#define INPUTMANAGER_H

#include <QApplication>
#include <QPoint>
#include <QDesktopWidget>
#include <QDebug>

class InputManager{
public:
    static InputManager* GetInstance();

    void TickUpdate();

    QPoint GetMousePos();
private:
    InputManager();
    static InputManager* instance;

    QPoint mousePos;
};

#endif // INPUTMANAGER_H
