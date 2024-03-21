#ifndef CLOCK_H
#define CLOCK_H

#include <QWidget>

class Clock : public QWidget
{
    Q_OBJECT
public:
    Clock(QWidget *parent = nullptr);
protected:
    void paintEvent(QPaintEvent *event) override; // обработчик событий переопределяется в подклассе Clock для получения событий рисования, передаваемых в событии, событие рисования - запрос на перерисовку всего или части виджета
};

#endif // CLOCK_H
