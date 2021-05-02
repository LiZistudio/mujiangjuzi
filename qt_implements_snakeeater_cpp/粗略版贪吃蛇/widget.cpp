#include "widget.h"
#include "ui_widget.h"
#include <QKeyEvent>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    // 生成一个食物，随机位置显示
    food_born();
    // 把第一个食物加入snake这个QList里面
    snake.push_back(food);
    // 再生成一个食物，随机位置显示
    food_born();

    wasd = Qt::Key_Down;
    timer = new QTimer;
    connect(timer,SIGNAL(timeout()),this,SLOT(slots_move()));
    timer->start(300);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::keyPressEvent(QKeyEvent *e)
{
    switch(e->key())
    {
        case Qt::Key_Up:
        case Qt::Key_Down:
        case Qt::Key_Left:
        case Qt::Key_Right:
            wasd = e->key();
    }
    slots_move();
}

void Widget::slots_move(void)
{
    for(int i=snake.size()-1;i>0;i--)
    {
        int x = snake[i-1]->x();
        int y = snake[i-1]->y();
        if(snake[0]->x() == x && snake[0]->y() == y && i != 1)
        {
            qDebug("gg");
            exit(0);
        }
        snake[i]->move(x,y);
    }

    int x = snake[0]->x();
    int y = snake[0]->y();

    switch(wasd)
    {
        case Qt::Key_Up:    y -= 20;    break;
        case Qt::Key_Down:  y += 20;    break;
        case Qt::Key_Left:  x -= 20;    break;
        case Qt::Key_Right: x += 20;    break;
    }


    if(x<0 || x>800 || y<0 || y>600)
    {
        qDebug("game over!");
        exit(0);
    }
    snake[0]->move(x,y);
    if(snake[0]->x() == food->x() && snake[0]->y() == food->y())
    {
        snake.push_back(food);
        food_born();
    }
}

void Widget::food_born(void)
{
    food = new Food(this);
    int x = rand()%(this->width()/food->width())*food->width();
    int y = rand()%(this->height()/food->height())*food->height();
    food->move(x,y);
    food->show();
}
