#ifndef ARANHA_H
#define ARANHA_H
#include <QGraphicsItem>
#include "animales.h"
#include <QRandomGenerator>
#include <qmath.h>

class aranha:public animales
{
    int actualframe=0;
    int opcion=0;

public:
    aranha();
    virtual QRectF boundingRect() const;
    virtual void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr);

    void movimiento(void);
    void setOpcion(int newOpcion);
};

#endif // ARANHA_H
