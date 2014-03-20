#include <QApplication>
#include <QObject>
#include <QMainWindow>
#include <QPushButton>
#include <QVBoxLayout>
#include <canvas.h>
#include <gamethread.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWidget main;
    main.resize(640,480);

    Canvas c;

    GameThread t(&c);
    c.show();
    t.start();


    QObject::connect(&t, SIGNAL(newFrameComes()), &c, SLOT(repaint()));
    QObject::connect(&a, SIGNAL(abouToQuit()), &t, SLOT(quitGame()));


    return a.exec();
}
