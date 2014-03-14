#include "gameobject.h"

GameObject :: GameObject()
{

}

GameObject :: GameObject(int x, int y, int width, int height)
{
    this->x=x;
    this->y=y;
    this->width=width;
    this->height=height;
}

GameObject :: ~GameObject()
{

}
