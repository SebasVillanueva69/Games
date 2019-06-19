#include "mainwindow.h"
#include <QApplication>
#include "guesswhowindow.h"
#include <coinswindow.h>
#include "bomberwindow.h"
#include "catwindow.h"
#include "pathwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PathWindow w;
    w.show();

    return a.exec();
}
