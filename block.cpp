#include "block.h"

Block :: Block(int x, int y) : GameObject(x, y, RectW,RectH)
{
    color = QColor(RED,GREEN,BLUE);
    brush = QBrush(color);
}

Block :: ~Block()
{

}
void Block :: render(QPainter &painter)
{
    painter.setBrush(brush);
    painter.drawRect(x,y,width,height);
}

void Block :: update()
{

}

QRect Block :: getBoundingBox()
{
    QRect box (x,y,width,height);
    return box;
}
