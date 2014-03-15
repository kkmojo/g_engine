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
    const static int RED = 200;
    const static int GREEN = 0;
    const static int BLUE = 0;
    const static int RectX = 290;
    const static int RectY = 405;
    const static int RectW = 30;
    const static int RectH = 5;

public:
    Spirit();
    Spirit(int x, int y);
    ~Spirit();
    void update();
    void render(QPainter &painter);
    void onKeyPress(QKeyEvent *event);
    void onKeyRelease(QKeyEvent *event);
    void onIntersect(GameObject *obj, int direction);
    QRect getBoundingBox();

};

#endif // SPIRIT_H
