#include "cuchillo.h"

qreal cuchillo::getX() const
{
    return x;
}

void cuchillo::setX(qreal newX)
{
    x = newX;
}

qreal cuchillo::getY() const
{
    return y;
}

void cuchillo::setY(qreal newY)
{
    y = newY;
}

qreal cuchillo::getVx() const
{
    return vx;
}

void cuchillo::setVx(qreal newVx)
{
    vx = newVx;
}

qreal cuchillo::getVy() const
{
    return vy;
}

void cuchillo::setVy(qreal newVy)
{
    vy = newVy;
}

cuchillo::cuchillo()
{
    this->x=20;
    this->y=30;

}
QRectF cuchillo::boundingRect() const
{
    return QRectF(x,y,70,70);
}
void cuchillo::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QPixmap cuchimgn(":/recursos/cuchillo.png");
    painter->drawPixmap(this->x,this->y,70,70,cuchimgn);
    Q_UNUSED(option);
    Q_UNUSED(widget);
}
void cuchillo::actualizar()
{
    y=y+vy*0.3;
    x=x+vx*0.3;

    if((x<=0)||(x>=400)){
        vx=0;
    }
    if((y<=0)||(y>=270)){
        vy=0;
    }
    setPos(x,y);
}
