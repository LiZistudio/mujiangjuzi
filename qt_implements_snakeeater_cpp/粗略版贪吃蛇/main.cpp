#include <QtGui/QApplication>
#include <stdio.h>
#include "widget.h"

int main(int argc, char *argv[])
{
    srand(time(NULL));
    QApplication a(argc, argv);
    Widget w;
    w.show();
    
    return a.exec();
}
