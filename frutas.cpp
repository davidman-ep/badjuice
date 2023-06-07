#include "frutas.h"


qreal frutas::getPrecio() const
{
    return precio;
}

void frutas::setPrecio(qreal newPrecio)
{
    precio = newPrecio;
}

frutas::frutas()
{

   this->x=qreal(QRandomGenerator::global()->bounded(40,360));
   this->y=270;//250
   this->vx=qreal(QRandomGenerator::global()->bounded(-20,20));;
   this->vy=-48;
}

QRectF frutas::boundingRect() const
{
    return QRectF(this->x,this->y,30,30);
}
void frutas::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setBrush(Qt::yellow);
    painter->setPen(Qt::black);
    painter->drawEllipse(boundingRect());
    Q_UNUSED(option);
    Q_UNUSED(widget);
}

void frutas::curvaMov()
{

    y=y+vy*0.2;
    x=x+vx*0.2;
    setPos(x,y);

    this->vy++;
    if((x<=0)||(x>=420)){
        vx*=-1;
    }
    if(y<=15){
        vy*=-1;
    }

}

qreal frutas::getVy() const
{
    return vy;
}

void frutas::setVy(qreal newVy)
{
    vy = newVy;
}

qreal frutas::getX() const
{
    return x;
}

void frutas::setX(qreal newX)
{
    x = newX;
}

qreal frutas::getY() const
{
    return y;
}

void frutas::setY(qreal newY)
{
    y = newY;
}

qreal frutas::getVx() const
{
    return vx;
}

void frutas::setVx(qreal newVx)
{
    vx = newVx;
}


