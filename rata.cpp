#include "rata.h"


rata::rata()
{
    this->x=qreal(QRandomGenerator::global()->bounded(30,360));
    this->y=qreal(QRandomGenerator::global()->bounded(30,280));
    this->vx=qreal(QRandomGenerator::global()->bounded(-15,15));
    this->vy=qreal(QRandomGenerator::global()->bounded(-15,15));
    this->precio=-1;
}
QRectF rata::boundingRect() const
{
    return QRectF(x,y,80,80);
}
void rata::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QPixmap pixmap(":/recursos/raton.png");
    painter->drawPixmap(x,y,80,80,pixmap,0,0,80,80);
    Q_UNUSED(option);
    Q_UNUSED(widget);
}

void rata::parar()
{
    vx=0;

}
void rata::movimiento()
{
    x=x+vx*0.2;
    y=y+vy*0.2;
    if((x<=0)||(x>=360)){
        vx*=-1;
    }
    if(y<=0){
        vy*=-1;
    }
    setPos(x,y);
}

