#ifndef BLOCK_H
#define BLOCK_H

#include "gameobject.h"

class Block:public GameObject
{
private:
    const static int RectW = 64;
    const static int RectH = 18;
    const static int RED = 139;
    const static int GREEN = 0;
    const static int BLUE = 255;

public:
    const static int WIDTH = 64;
    const static int HEIGHT = 18;
    Block(int x, int y);
    ~Block();
    void render(QPainter &painter);
    void update();
    QRect getBoundingBox();

};

#endif // BLOCK_H
