#include "animales.h"

qreal animales::getVx() const
{
    return vx;
}

void animales::setVx(qreal newVx)
{
    vx = newVx;
}

qreal animales::getVy() const
{
    return vy;
}

void animales::setVy(qreal newVy)
{
    vy = newVy;
}

qreal animales::getDelta() const
{
    return delta;
}

void animales::setDelta(qreal newDelta)
{
    delta = newDelta;
}

qreal animales::getPrecio() const
{
    return precio;
}

void animales::setPrecio(qreal newPrecio)
{
    precio = newPrecio;
}

animales::animales()
{
    this->x=150;
    this->y=150;
    this->ang=0;
    this->radio=0;
}


QRectF animales::boundingRect() const
{
    return QRectF(x,y,50,50);
}
void animales::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{    
    painter->drawEllipse(boundingRect());
    Q_UNUSED(option);
    Q_UNUSED(widget);
}
