#ifndef CUCHILLO_H
#define CUCHILLO_H
#include <QGraphicsItem>
#include <QPainter>

class cuchillo:public QGraphicsItem
{
    qreal x,y;
    qreal vx,vy;
public:
    cuchillo();
    virtual QRectF boundingRect() const;
    virtual void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr);

    void actualizar(void);
    qreal getX() const;
    void setX(qreal newX);
    qreal getY() const;
    void setY(qreal newY);
    qreal getVx() const;
    void setVx(qreal newVx);
    qreal getVy() const;
    void setVy(qreal newVy);
};

#endif // CUCHILLO_H
