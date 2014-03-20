#include "ball.h"
#include "math.h"


Ball::Ball()
{
    color = QColor(RED,GREEN,BLUE);
    brush = QBrush(color);
    angle = 45.0 / 180 * PI;
    x = initX;
    y = initY;
    width = RectW;
    height = RectH;
    xSpeed = SPEED * cos(angle);
    ySpeed = SPEED * sin(angle);
}

Ball::~Ball()
{

}

void Ball::render(QPainter &painter)
{

    QPen pen(color, 2);
    painter.setPen(pen);
    painter.setBrush(brush);
    painter.drawEllipse(x,y,width,height);

}

void Ball::update()
{
     x += xSpeed;
     y -= ySpeed;

     if(x < 0 || x > 640 - RectW)
     {
         xSpeed = -xSpeed;
     }


     if(y < 0 || y > 480 - RectH)
     {
         ySpeed = -ySpeed;
     }

}

QRect Ball::getBoundingBox()
{
    QRect box (x,y,width,height);
    return box;
}
