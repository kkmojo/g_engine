#include "spirit.h"
#include <QDebug>

Spirit::Spirit()
{
    color = QColor(RED,GREEN,BLUE);
    brush = QBrush(color);
    x = (640 - RectW) / 2;
    y = RectY;
    width = RectW;
    height = RectH;
}

Spirit::Spirit(int x, int y)
{
    this->x = x;
    this->y = y;
}

void Spirit :: update()
{
    int xSpeed = 0;

    if(isLeft)
    {
        xSpeed -= SPEED;
    }

    if(isRight)
    {
        xSpeed +=SPEED;
    }

    x += xSpeed;


    if(x < 0){
        x = 0;
    }

    if(x + RectW > 640)
    {
        x = 640 - RectW;
    }
}

Spirit:: ~Spirit()
{

}

void Spirit :: render(QPainter &painter)
{
    QPen pen(color, 2);
    painter.setPen(pen);
    painter.setBrush(brush);
    painter.drawRect(x,y,width,height);
}

void Spirit :: onKeyPress(QKeyEvent *event)
{
    switch(event->key())
    {
        case Qt::Key_Left:
            isLeft = true;
            break;
        case Qt::Key_Right:
            isRight = true;
            break;
    }
}

void Spirit :: onKeyRelease(QKeyEvent *event)
{
    switch(event->key())
    {
        case Qt::Key_Left:
            isLeft = false;
            break;
        case Qt::Key_Right:
            isRight = false;
            break;
    }
}

void Spirit ::onIntersect(GameObject *obj, int direction)
{

}

QRect Spirit :: getBoundingBox()
{
    QRect box (x,y,width,height);
    return box;
}
