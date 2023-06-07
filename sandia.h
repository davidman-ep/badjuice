#ifndef SANDIA_H
#define SANDIA_H
#include <QGraphicsItem>
#include <QPainter>
#include <QRandomGenerator>
#include "frutas.h"

class sandia:public frutas
{
public:
    sandia();
    virtual QRectF boundingRect() const;
    virtual void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr);

    void curvaMov(void);
};

#endif // SANDIA_H
