#ifndef STATICBG_H
#define STATICBG_H

#include<QWidget>
#include<QImage>

class StaticBG
{
private:
    QImage image;

public:
    StaticBG();
    void draw(QPainter &painter);
};

#endif // STATICBG_H
