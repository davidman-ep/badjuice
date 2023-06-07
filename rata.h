#ifndef RATA_H
#define RATA_H
#include "animales.h"
#include <QRandomGenerator>


class rata:public animales
{
    int actualframe=0;
public:
    rata();
    virtual QRectF boundingRect() const;
    virtual void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr);
    void parar(void);
    void movimiento(void);
};

#endif // RATA_H
