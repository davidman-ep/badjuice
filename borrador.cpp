#include "borrador.h"

borrador::borrador()
{
    x=0,y=200;
}
QRectF borrador::boundingRect() const
{
    return QRectF(x,y,360,201);
}
void borrador::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setPen(Qt::blue);
    painter->drawRect(boundingRect());
    Q_UNUSED(option);
    Q_UNUSED(widget);
}
