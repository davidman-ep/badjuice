#ifndef CUCARACHA_H
#define CUCARACHA_H
#include "animales.h"
#include <QRandomGenerator>
#include <qmath.h>

class cucaracha:public animales
{
    int actualframe=0;
    int opcion=0;

public:
    cucaracha();
    virtual QRectF boundingRect() const;
    virtual void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr);

    void movimiento(void);
    void setOpcion(int newOpcion);
};

#endif // CUCARACHA_H
