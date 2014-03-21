#ifndef SPIRIT_H
#define SPIRIT_H

#include <QKeyEvent>
#include <QPainter>
#include "gameobject.h"

class Spirit : public GameObject
{

private:
    const static int SPEED = 10;
    const static int RED = 200;
    const static int GREEN = 0;
    const static int BLUE = 0;
    const static int RectY = 450;
    const static int RectW = 60;
    const static int RectH = 6;
    bool isLeft;
    bool isRight;

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
