#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTimer>
#include <QKeyEvent>
#include <QList>
#include "food.h"

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT
    QTimer* timer;
    int wasd;
    QList<Food*> snake;
    Food* food;
public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
    void keyPressEvent(QKeyEvent *key);
    void food_born(void);
public slots:
    void slots_move(void);
private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
