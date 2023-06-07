#ifndef CIGARRO_H
#define CIGARRO_H
#include <QGraphicsItem>
#include <QPainter>
#include <QRandomGenerator>
#include "frutas.h"//mismo comportamiento de fruta

class cigarro:public frutas
{
public:
    cigarro();
    virtual QRectF boundingRect() const;
    virtual void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr);

    void curvaMov(void);
};

#endif // CIGARRO_H
