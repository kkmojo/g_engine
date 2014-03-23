#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include <QPainter>
#include <QPoint>
#include <QBrush>
#include <QColor>
#include <QPen>
#include <Qt>
#include <QDebug>


#define PI 22.0/7

class GameObject
{
public:
    GameObject();
    GameObject(int x, int y, int width, int height);
    virtual ~GameObject();
    virtual void update() = 0;
    virtual void render(QPainter &painter) = 0;
    virtual QRect getBoundingBox() = 0;

protected:
    int x;
    int y;
    int width;
    int height;
    QBrush brush;
    QColor color;

};

#endif // GAMEOBJECT_H
