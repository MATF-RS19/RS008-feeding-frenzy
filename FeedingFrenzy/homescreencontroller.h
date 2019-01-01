#ifndef HOMESCREENCONTROLLER_H
#define HOMESCREENCONTROLLER_H

#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsRectItem>
#include <QDebug>


class HomeScreenController{
public:
    HomeScreenController();
    QGraphicsScene* GetScene();
private:
    void Init();
    QGraphicsScene* scene;
};

#endif // HOMESCREENCONTROLLER_H
