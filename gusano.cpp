#include "gusano.h"

gusano::gusano()
{
    this->Cx=qreal(QRandomGenerator::global()->bounded(30,360));
    this->y=290;
    this->radio=qreal(QRandomGenerator::global()->bounded(10,30));
    this->vy=1;
    this->delta=0.1;
    this->precio=-0.7;

}
QRectF gusano::boundingRect() const
{
    return QRectF(x,y,80,80);
}
void gusano::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QPixmap pixmap(":/recursos/gusano.png");
    painter->drawPixmap(x,y,80,80,pixmap,0,0,80,80);
    Q_UNUSED(option);
    Q_UNUSED(widget);
}

void gusano::movimiento()
{
    if(opcion==0){
        x=Cx+radio*qCos(ang);
        y=y+(vy*-1);
        ang+=delta;
    }
    else{
        y+=(vy+6);
    }
    setPos(x,y);
}

void gusano::setOpcion(int newOpcion)
{
     opcion = newOpcion;
}
