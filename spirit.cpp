#include "spirit.h"

Spirit::Spirit()
{
    color = QColor(RED,GREEN,BLUE);
    brush = QBrush(color);
}

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
    QPen pen(color, 2);
    painter.setPen(pen);
    painter.setBrush(brush);
    painter.drawRect(RectX,RectY,RectW,RectH);
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
    QRect box (x,y,width,height);
    return box;
}
