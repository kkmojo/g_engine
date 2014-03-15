#include "canvas.h"

Canvas::Canvas(QWidget *parent) : QWidget(parent){
}

void Canvas::paintEvent(QPaintEvent *event){
    Q_UNUSED(event);
    QPainter qp(this);//表示要在canvas里,画画.
    update(&qp);
}

void Canvas::update(QPainter *qp){
    // write draw program here
    //StaticBG staticbackground;
    //staticbackground.draw(qp);
    ball.render(*qp);
    spirit.render(*qp);
    background.draw(*qp);

}
