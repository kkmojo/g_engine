#include "ball.h"
#include "math.h"
#include "canvas.h"


Ball::Ball()
{
    color = QColor(RED,GREEN,BLUE);
    brush = QBrush(color);
    angle = 45.0 / 180 * PI;
    x = initX;
    y = initY;
    width = RectW;
    height = RectH;
    xSpeed = cos(angle) * SPEED;
    ySpeed = sin(angle) * SPEED;
    score = 0;

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

void Ball::setSpirit(Spirit *spirit)
{
    s = spirit;
}

void Ball::setBlockArray(Block **blocks)
{
    blockArray = blocks;
}

void Ball::update()
{
    x += xSpeed;
    y -= ySpeed;
    // TODO: game over check
    //if(y >= 480){
    // gameover();
    //}

    QRect ballBB = this->getBoundingBox();
    //intersect with frameborder

    if(x <= 0 || x >= 640 - RectW)
    {
        angle += 5;
        xSpeed = -cos(angle) * SPEED;
        ySpeed = -sin(angle) * SPEED;

    }


    if(y <= 0 || y >= 480 - RectH)
    {
        angle += 5;
        xSpeed = -cos(angle) * SPEED;
        ySpeed = -sin(angle) * SPEED;
    }

    for (int i = 0; i < Canvas::H_COUNT * Canvas::V_COUNT; i++)
    {
        QRect blockBB = blockArray[i]->getBoundingBox();
        if(blockBB.intersects(ballBB))
        {
            blockArray[i]->remove();
            score++;
            if(ballBB.x() < blockBB.x() )
            {
                xSpeed = -fabs(xSpeed);
            }//west intersect

            else if(ballBB.x()+ballBB.width() > blockBB.x()+blockBB.width())
            {
                xSpeed = fabs(xSpeed);
            }//east intersect
            else if(ballBB.y()+ballBB.height() > blockBB.y()+blockBB.height())
            {
                ySpeed = -fabs(ySpeed);
            }//south intersect

            else if(ballBB.y()< blockBB.y())
            {
                ySpeed = fabs(ySpeed);
            }//north intersect

        }


    }

    //intersect with spirit
    QRect spiritBB = s->getBoundingBox();

    if(spiritBB.intersects(ballBB))
    {
        if(ballBB.y() < spiritBB.y())
        {
            ySpeed = fabs(ySpeed);
        }
        angle += 5;
        xSpeed = cos(angle) * SPEED;
        ySpeed = sin(angle) * SPEED;
    }
}

QRect Ball::getBoundingBox()
{
    QRect box (x,y,width,height);
    return box;
}
