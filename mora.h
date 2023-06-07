#ifndef MORA_H
#define MORA_H
#include <QGraphicsItem>
#include <QPainter>
#include <QRandomGenerator>
#include "frutas.h"

class mora:public frutas
{
public:
    mora();
    virtual QRectF boundingRect() const;
    virtual void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr);

    void curvaMov(void);
};

#endif // MORA_H
