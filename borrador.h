#ifndef BORRADOR_H
#define BORRADOR_H
#include <QGraphicsItem>
#include <QPainter>
class borrador:public QGraphicsItem
{
    qreal x,y;
public:
    borrador();
    virtual QRectF boundingRect() const;
    virtual void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr);

};

#endif // BORRADOR_H
