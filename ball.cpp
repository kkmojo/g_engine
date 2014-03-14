#include "ball.h"

Ball::Ball()
{
    initPosition = QPoint(initX, initY);
    color = QColor(RED,GREEN,BLUE);
    brush = QBrush(color);
}

Ball::~Ball()
{

}

void Ball::render(QPainter &painter)
{

    //QPen pen(color, 2);
    //painter.setPen(pen);
    painter.setBrush(brush);
    painter.drawEllipse(initPosition,RectW,RectH);
    //painter.fillRect(rectangle,color);

}

void Ball::update()
{

}

QRect Ball::getBoundingBox()
{
    QRect box (x,y,width,height);
    return box;
}
