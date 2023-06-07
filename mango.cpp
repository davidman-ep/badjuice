#include "mango.h"

mango::mango()
{
    this->x=qreal(QRandomGenerator::global()->bounded(40,360));
    this->y=270;
    this->vx=qreal(QRandomGenerator::global()->bounded(-20,20));;
    this->vy=-48;
    this->precio=0.6;
}
QRectF mango::boundingRect() const
{
    return QRectF(x,y,80,80);
}
void mango::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QPixmap pixmap(":/recursos/mango.png");
    painter->drawPixmap(x,y,80,80,pixmap,0,0,80,80);
    Q_UNUSED(option);
    Q_UNUSED(widget);
}

void mango::curvaMov()
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
