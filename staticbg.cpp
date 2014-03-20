#include "staticbg.h"

StaticBG::StaticBG()
{
    bool load = image.load(":/SBG/1.png");
    image=image.scaled(640,480);
}

void StaticBG::paintEvent(QPainter *p)
{
   //p->drawImage(0,0,image);
   p->drawImage(0,0,image);
}
