#include "canvas.h"

Canvas::Canvas(QWidget *parent) : QWidget(parent){

    block = new Block*[V_COUNT * H_COUNT];

    for (int i = 0; i < H_COUNT; i++){
        for(int j = 0; j < V_COUNT; j++){
            // construct blocks
            int x = 0 + Block::WIDTH * j;
            int y = 0 + Block::HEIGHT * i;

            block[i * V_COUNT + j] = new Block(x, y);
        }
    }
}

Canvas::~Canvas(){

    for (int i = 0; i < H_COUNT; i++){
        for(int j = 0; j < V_COUNT; j++){
            delete block[i * V_COUNT + j];//delete element
        }
    }
    delete block;// delete array
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
    background.paintEvent(qp);
    for (int i = 0; i < H_COUNT; i++)
    {
        for(int j = 0; j < V_COUNT; j++)
        {
            block[i*V_COUNT+j]->render(*qp);
        }
    }
    ball.update();
    ball.render(*qp);
    spirit.update();
    spirit.render(*qp);

    /*CANVAS_WIDTH;
    SPIRIT_WIDTH;
    x = (CANVAS_WIDTH - SPIRIT_WIDTH) / 2;*/
}

void Canvas::keyPressEvent(QKeyEvent *event){
    spirit.onKeyPress(event);
}

void Canvas::keyReleaseEvent(QKeyEvent *event){
    spirit.onKeyRelease(event);
}
