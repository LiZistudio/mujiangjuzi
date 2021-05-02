#include "widget.h"
#include "ui_widget.h"
#include <stdio.h>
#include <stdlib.h>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    wasd = Qt::Key_Down;
    timer = new QTimer;
    connect(timer,SIGNAL(timeout()),this,SLOT(slots_move()));
    timer->start(100);  // 移动速度
}

Widget::~Widget()
{
    delete ui;
}

void Widget::keyPressEvent(QKeyEvent *e)
{
    switch(e->key())
    {
    case Qt::Key_Down:
    case Qt::Key_Up:
    case Qt::Key_Left:
    case Qt::Key_Right:
        wasd = e->key();
    }
}

void Widget::slots_move()
{
    int x = ui->label->x(),y = ui->label->y();
    switch(wasd)
    {
    case Qt::Key_Down: y += 30; break;
    case Qt::Key_Up: y -= 30; break;
    case Qt::Key_Left: x -= 30; break;
    case Qt::Key_Right: x += 30; break;
    }

    if(x < 0 || x > 390 || y < 0 || y > 300)
    {
        qDebug("gg");
        exit(1);
    }

    ui->label->move(x,y);
    Widget::ate();
}

void Widget::ate()
{
    int food_x,food_y,snake_x,snake_y;

    food_x = ui->food->x();
    food_y = ui->food->y();
    snake_x = ui->label->x();
    snake_y = ui->label->y();
    if((food_x-snake_x > -30 && food_x-snake_x < 30) && (food_y-snake_y > -30 && food_y-snake_y < 30))
    {
        ui->food->move(rand()%360+30,rand()%240+30);
    }

}
