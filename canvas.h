#ifndef CANVAS_H
#define CANVAS_H

#include <QWidget>
#include <QPainter>
#include <QColor>
#include <QBrush>
#include <QDebug>
#include <staticbg.h>
#include "ball.h"
#include "spirit.h"
#include "block.h"
#include "staticbg.h"
#include "score.h"

class Canvas : public QWidget
{
    Q_OBJECT
public:
    explicit Canvas(QWidget *parent = 0);
    ~Canvas();
    const static int V_COUNT = 10;
    const static int H_COUNT = 8;

protected:
    void paintEvent(QPaintEvent *event);
    void update(QPainter *qp);
    void keyPressEvent(QKeyEvent *event);
    void keyReleaseEvent(QKeyEvent *event);
    //Attemtp to push

private:
    Ball ball;
    Spirit spirit;
    StaticBG background;
    Block **block;
    Score score;


};

#endif // CANVAS_H
