#ifndef HOMESCREENCONTROLLER_H
#define HOMESCREENCONTROLLER_H

#include <QMainWindow>
#include <QGraphicsScene>
namespace Ui {
class homescreencontroller;
}

class homescreencontroller : public QMainWindow
{
    Q_OBJECT

public:
    explicit homescreencontroller(QWidget *parent = nullptr);
    ~homescreencontroller();
    QGraphicsScene* GetScene();

private slots:
    void on_pushButton_play_clicked();

    void on_pushButton_howtoplay_clicked();

private:
    Ui::homescreencontroller *ui;
    void Init();
    QGraphicsScene* scene;
};

#endif // HOMESCREENCONTROLLER_H
