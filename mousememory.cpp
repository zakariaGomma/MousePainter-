//11/4/2018
// By: Zakaria Gomma

#include "mousememory.h"

MouseMemory::MouseMemory(QObject *parent) : QObject(parent)
{

}

void MouseMemory::test()
{
    qDebug()<<"Hello from c++";
}

void MouseMemory::clear()
{
    qDebug() <<"clear the data";
}

void MouseMemory::save()
{
     qDebug() <<"save the data";
}

void MouseMemory::add(double x, double y)
{
    QPoint p(x,y);
     qDebug() <<"Adding"<<p;
}

void MouseMemory::add(QPointF point)
{
     qDebug() <<"Adding Float"<<point;
}


