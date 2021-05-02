#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTimer>
#include <QKeyEvent>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT
    QTimer* timer;
    int wasd;
    int be_long;
public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
    void keyPressEvent(QKeyEvent *e);
    void ate();
public slots:
    void slots_move();
    
private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
