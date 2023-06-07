#ifndef FRUTAS_H
#define FRUTAS_H
#include <QGraphicsItem>
#include <QPainter>
#include <QRandomGenerator>



class frutas:public QGraphicsItem
{
public:
    qreal x,y;
    qreal vx,vy;
    qreal precio;
public:
    frutas();

    virtual QRectF boundingRect() const;
    virtual void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr);

    void curvaMov(void);

    qreal getVy() const;
    void setVy(qreal newVy);

    qreal getX() const;
    void setX(qreal newX);
    qreal getY() const;
    void setY(qreal newY);

    qreal getVx() const;
    void setVx(qreal newVx);
    qreal getPrecio() const;
    void setPrecio(qreal newPrecio);
};

#endif // FRUTAS_H
