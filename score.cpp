#include "score.h"

Score::Score()
{
}

void Score :: setScore(int x)
{
    score = x;
}



void Score ::  display(QPainter *paint)
{
    QString s = QString::number(score);
    paint->setPen(Qt::blue);
    paint->drawText(TextX, TextY, s);
}
