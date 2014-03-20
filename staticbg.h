#ifndef STATICBG_H
#define STATICBG_H

#include <QWidget>
#include <QImage>
#include <QPainter>

class StaticBG//:public QWidget
{
private:
    QImage image;

public:
    StaticBG();
    void paintEvent(QPainter *p);
};

#endif // STATICBG_H
