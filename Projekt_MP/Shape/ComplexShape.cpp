#include "ComplexShape.h"

#include <queue>

ComplexShape::ComplexShape(Display* w)
{
    currentDisplay = w;
    std::queue<Shape*> shapesQueue = *new std::queue<Shape*>;
}

bool ComplexShape::add(Shape *o)
{
    if(shapesQueue.size() < 5)
    {
        shapesQueue.push(o);
        return true;
    }
    else
    {
        return false;
    }
}

void ComplexShape::Draw()
{
    std::queue<Shape*> tempQueue = shapesQueue;
    unsigned long size = tempQueue.size();
    for(int i = 0; i < size; i++)
    {
        tempQueue.front()->Draw();
        tempQueue.pop();
    }
}
