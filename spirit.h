#ifndef SPIRIT_H
#define SPIRIT_H

#include <QKeyEvent>
#include <QPainter>
#include "gameobject.h"

class Spirit : public GameObject
{

private:
    int x;
    int y;
    int direction;
    const static int LEFT = 1;
    const static int RIGHT = 2;
    const static int SPEED = 10;

public:

    Spirit(int x, int y);
    ~Spirit();
    void update() = 0;
    void render(QPainter &painter);
    void onKeyPress(QKeyEvent *event);
    void onKeyRelease(QKeyEvent *event);
    void onIntersect(GameObject *obj, int direction);
    QRect getBoundingBox();

};

#endif // SPIRIT_H
