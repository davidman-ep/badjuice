#include "aranha.h"

void aranha::setOpcion(int newOpcion)
{
    opcion = newOpcion;
}

aranha::aranha()
{
    this->x=qreal(QRandomGenerator::global()->bounded(30,360));
    this->Cy=140;
    this->radio=qreal(QRandomGenerator::global()->bounded(10,35));
    this->vy=7;
    this->delta=0.1;
    this->precio=-0.4;
}
QRectF aranha::boundingRect() const
{
    return QRectF(x,y,80,80);
}
void aranha::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QPixmap pixmap(":/recursos/araña.png");
    painter->drawPixmap(x,y,80,80,pixmap,0,0,80,80);
    Q_UNUSED(option);
    Q_UNUSED(widget);
}
void aranha::movimiento(){

    if(opcion==0){
        y=Cy+radio*qSin(ang);
        ang+=delta;
    }
    else{
        y+=vy;
    }
    setPos(x,y);
}
