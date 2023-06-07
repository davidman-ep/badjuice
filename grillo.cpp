#include "grillo.h"

grillo::grillo()
{
    this->Cx=qreal(QRandomGenerator::global()->bounded(30,360));
    this->Cy=qreal(QRandomGenerator::global()->bounded(30,280));
    this->radio=qreal(QRandomGenerator::global()->bounded(15,60));
    this->vy=7;
    this->delta=0.1;
    this->precio=-0.6;
}
QRectF grillo::boundingRect() const
{
    return QRectF(x,y,80,80);
}
void grillo::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QPixmap pixmap(":/recursos/grillo.png");
    painter->drawPixmap(x,y,80,80,pixmap,0,0,80,80);
    Q_UNUSED(option);
    Q_UNUSED(widget);
}

void grillo::movimiento()
{
    if(opcion==0){
        x=Cx+radio*qCos(3*ang)*qCos(ang);
        y=Cy+radio*qCos(3*ang)*qSin(ang);
        ang+=delta;
    }
    else{
        y+=vy;
    }
    setPos(x,y);
}

void grillo::setOpcion(int newOpcion)
{
     opcion = newOpcion;
}
