#ifndef MANGO_H
#define MANGO_H
#include <QGraphicsItem>
#include <QPainter>
#include <QRandomGenerator>
#include "frutas.h"

class mango:public frutas
{
public:
    mango();
    virtual QRectF boundingRect() const;
    virtual void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr);

    void curvaMov(void);
};

#endif // MANGO_H
