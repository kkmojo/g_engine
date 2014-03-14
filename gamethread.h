#ifndef GAMETHREAD_H
#define GAMETHREAD_H

#include <QThread>
#include <QObject>
#include <canvas.h>


class GameThread : public QThread{
    Q_OBJECT

public:
    GameThread(Canvas *c);

signals:
    void newFrameComes();

public slots:
    void quitGame();
    void pauseGame();

private:
    void run();
    Canvas *c;
    bool running;
    bool finish;
    bool pause;
};

#endif // GAMETHREAD_H
