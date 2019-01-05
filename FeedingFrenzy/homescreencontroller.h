#ifndef HOMESCREENCONTROLLER_H
#define HOMESCREENCONTROLLER_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QKeyEvent>

namespace Ui {
    class homescreencontroller;
}

class homescreencontroller : public QMainWindow
{
    Q_OBJECT

public:
    explicit homescreencontroller(QWidget *parent = nullptr);
    ~homescreencontroller();

private slots:
    void on_howtoplay_clicked();
    void on_play_clicked();

private:
    Ui::homescreencontroller *ui;
    void Init();
};

#endif // HOMESCREENCONTROLLER_H
