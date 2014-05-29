#include "gamethread.h"
#include <QObject>
#include <QDebug>

GameThread::GameThread(Canvas *c)
{
    this->c = c;
    this->running = true;
    this->finish = false;
    this->pause = false;
}

void GameThread::run()
{
    while(running)
    {
        if(!pause)
        {
            // c->update();
            emit newFrameComes();
        }
        this->msleep(1000.0/60);
    }
    qDebug() << "finish!";
    finish = true;
}

void GameThread::quitGame()
{
    qDebug() << "quit game";
    running = false;
    while(!finish);
}

void GameThread::pauseGame()
{
    pause = !pause;
}
