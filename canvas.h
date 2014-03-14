#ifndef CANVAS_H
#define CANVAS_H

#include <QWidget>
#include <QPainter>
#include <QColor>
#include <QBrush>
#include <staticbg.h>
#include "ball.h"

class Canvas : public QWidget
{
    Q_OBJECT
public:
    explicit Canvas(QWidget *parent = 0);

protected:
    void paintEvent(QPaintEvent *event);
    void update(QPainter *qp);
    //Attemtp to push

private:
    Ball ball;
};

#endif // CANVAS_H
