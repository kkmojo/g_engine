#include <QApplication>
#include "canvas.h"
#include "layers.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Canvas canvas;
    canvas.resize(640, 480);
    canvas.setWindowTitle("Canvas");
    canvas.show();

    return a.exec();
}
