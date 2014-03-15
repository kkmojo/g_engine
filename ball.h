#ifndef BALL_H
#define BALL_H

#include "gameobject.h"


class Ball:public GameObject
{
public:
    Ball();
    ~Ball();
    void render(QPainter &painter);
    void update();
    QRect getBoundingBox();

private:
    const static int RectX = 0;
    const static int RectY = 0;
    const static int RectW = 7;
    const static int RectH = 7;
    const static int RED = 0;
    const static int GREEN = 255;
    const static int BLUE = 0;
    const static int initX = 320;
    const static int initY = 400;
    const QRect rectangle = QRect(RectX,RectY,RectW,RectH);


};

#endif // BALL_H
