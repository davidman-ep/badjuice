#include "cucaracha.h"

cucaracha::cucaracha()
{    

    this->Cx=qreal(QRandomGenerator::global()->bounded(30,360));
    this->Cy=qreal(QRandomGenerator::global()->bounded(30,280));
    this->radio=qreal(QRandomGenerator::global()->bounded(10,55));
    this->vy=7;
    this->delta=0.1;
    this->precio=-0.5;
}

QRectF cucaracha::boundingRect() const
{
    return QRectF(x,y,80,80);
}
void cucaracha::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QPixmap pixmap(":/recursos/cucaracha.png");
    painter->drawPixmap(x,y,80,80,pixmap,0,0,80,80);
    Q_UNUSED(option);
    Q_UNUSED(widget);
}

void cucaracha::movimiento()
{
    if(opcion==0){
        y=Cy+radio*qSin(ang);
        x=Cx+radio*qCos(ang);
        ang+=delta;
    }
    else{
        y+=vy;
    }
    setPos(x,y);
}

void cucaracha::setOpcion(int newOpcion)
{
     opcion = newOpcion;
}
