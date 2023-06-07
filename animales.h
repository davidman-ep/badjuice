#ifndef ANIMALES_H
#define ANIMALES_H
#include <QGraphicsItem>
#include <qmath.h>
#include <QPainter>

class animales:public QGraphicsItem
{
public:
    qreal x,y,Cx,Cy,vx,vy,ang,radio,delta,precio;

public:
    animales();
    virtual QRectF boundingRect() const;
    virtual void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr);

    qreal getVx() const;
    void setVx(qreal newVx);
    qreal getVy() const;
    void setVy(qreal newVy);
    qreal getDelta() const;
    void setDelta(qreal newDelta);
    qreal getPrecio() const;
    void setPrecio(qreal newPrecio);
};

#endif // ANIMALES_H
