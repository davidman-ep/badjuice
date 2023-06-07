#ifndef MANZANA_H
#define MANZANA_H
#include <QGraphicsItem>
#include <QPainter>
#include <QRandomGenerator>
#include "frutas.h"

class manzana:public frutas
{
public:
    manzana();
    virtual QRectF boundingRect() const;
    virtual void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr);

    void curvaMov(void);
};

#endif // MANZANA_H
