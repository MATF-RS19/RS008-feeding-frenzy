#ifndef HOMESCREENCONTROLLER_H
#define HOMESCREENCONTROLLER_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QKeyEvent>

namespace Ui {
    class screencontroller;
}

class screencontroller : public QMainWindow
{
    Q_OBJECT

public:
    explicit screencontroller(QWidget *parent = nullptr);
    ~screencontroller();

private slots:
    void on_howtoplay_clicked();
    void on_play_clicked();

private:
    Ui::screencontroller *ui;
    void Init();
};

#endif // HOMESCREENCONTROLLER_H
