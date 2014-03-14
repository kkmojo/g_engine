#include "spirit.h"



Spirit::Spirit(int x, int y)
{
    this->x = x;
    this->y = y;

    direction = 0;
}
void Spirit :: update()
{
    int xSpeed = 0;

    if(direction & LEFT)
    {xSpeed -= SPEED;}

    if(direction & RIGHT)
    {xSpeed += SPEED;}

    x += xSpeed;
}

Spirit:: ~Spirit()
{

}

void Spirit :: render(QPainter &painter)
{

}

void Spirit :: onKeyPress(QKeyEvent *event)
{

}

void Spirit :: onKeyRelease(QKeyEvent *event)
{

}

void Spirit ::onIntersect(GameObject *obj, int direction)
{

}

QRect Spirit :: getBoundingBox()
{
    return QRect();
}
