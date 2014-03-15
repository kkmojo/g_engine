#include "staticbg.h"

StaticBG::StaticBG()
{
    bool load = image.load(":/SBG/1.png");
}

void StaticBG::draw(QPainter &painter)
{
   image = image.scaled(640,480);
   painter.drawImage(0,0,image);
}
