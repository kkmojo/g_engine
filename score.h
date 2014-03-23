#ifndef SCORE_H
#define SCORE_H

#include "ball.h"

class Score
{
public:
    Score();
    void setScore(int x);
    void display(QPainter *paint);
private:
    int score;
    const static int TextX = 500;
    const static int TextY = 300;
    QString s;

};

#endif // SCORE_H
