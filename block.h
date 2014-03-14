#ifndef BLOCK_H
#define BLOCK_H

#include "gameobject.h"

class Block:public GameObject
{
public:
    Block();
    ~Block();
    void render(QPainter &painter);
    void update();
    QRect getBoundingBox();

};

#endif // BLOCK_H
