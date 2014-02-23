#include "staticbg.h"

StaticBG::StaticBG()
{
bool load=StaticBG.load(":/game/1.png");
}

StaticBG::draw(QPainter *device)
{
    QRect size(0,0,640,480);

    device->drawImage(size,StaticBG);
}
