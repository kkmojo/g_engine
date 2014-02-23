#ifndef STATICBG_H
#define STATICBG_H

#include <QApplication>
#include <Qwidget>
#include <Qimage>
#include <Qpainter>

class StaticBG:public QWidget
{
public:
    StaticBG();
    void draw(QPainter *device);
private:
    QImage StatiBG;

};

#endif // STATICBG_H
