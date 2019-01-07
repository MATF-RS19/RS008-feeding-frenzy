#ifndef HOMESCREENCONTROLLER_H
#define HOMESCREENCONTROLLER_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QKeyEvent>
#include <QMediaPlayer>

enum ScreenType{
    Home,
    Main,
    HowToPlay,
    GameOver
};

namespace Ui {
    class screencontroller;
}

class ScreenController : public QMainWindow
{
    Q_OBJECT

public:
    explicit ScreenController(QWidget *parent = nullptr);
    ~ScreenController();

    void GoToGameOverScreen(bool hasWon);

private slots:
    void on_howtoplay_clicked();
    void on_play_clicked();

    void on_esc_clicked();

private:
    Ui::screencontroller *ui;
    void Init();
    void SwitchScreen(ScreenType screen);
    QMediaPlayer *button;
};

#endif // HOMESCREENCONTROLLER_H
