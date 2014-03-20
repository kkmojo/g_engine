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
    const static int RectW = 14;
    const static int RectH = 14;
    const static int RED = 0;
    const static int GREEN = 255;
    const static int BLUE = 0;
    const static int initX = 320;
    const static int initY = 400;
    const static int SPEED = 5;
    double xSpeed;
    double ySpeed;
    double angle;


};

#endif // BALL_H
