#ifndef GRILLO_H
#define GRILLO_H
#include "animales.h"
#include <QRandomGenerator>
#include <qmath.h>

class grillo:public animales
{
    int actualframe=0;
    int opcion=0;

public:
    grillo();
    virtual QRectF boundingRect() const;
    virtual void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr);

    void movimiento(void);
    void setOpcion(int newOpcion);
};

#endif // GRILLO_H
