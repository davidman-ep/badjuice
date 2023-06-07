#ifndef GUSANO_H
#define GUSANO_H
#include "animales.h"
#include <QRandomGenerator>
#include <qmath.h>

class gusano:public animales
{
    int actualframe=0;
    int opcion=0;

public:
    gusano();
    virtual QRectF boundingRect() const;
    virtual void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr);

    void movimiento(void);
    void setOpcion(int newOpcion);
};

#endif // GUSANO_H
