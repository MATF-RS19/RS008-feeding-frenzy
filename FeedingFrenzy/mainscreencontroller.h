#ifndef MAINSCREENCONTROLLER_H
#define MAINSCREENCONTROLLER_H

#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsRectItem>
#include <QDebug>


class MainScreenController{
public:
    MainScreenController();
    QGraphicsScene* GetScene();
private:
    void Init();
    QGraphicsScene* scene;
};

#endif // MAINSCREENCONTROLLER_H
