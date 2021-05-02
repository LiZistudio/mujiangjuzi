#include <stdio.h>
#include "food.h"

Food::Food(QWidget *parent) :
    QLabel(parent)
{
    this->resize(20,20);
    char buf[256] = {};
    sprintf(buf,"background-color: rgb(%d, %d, %d)",rand()%256,rand()%256,rand()%256);
    this->setStyleSheet(buf);
}
