#ifndef ComplexShape_h
#define ComplexShape_h

#include "Shape.h"
#include "Display.h"

#include <stdio.h>
#include <queue>

class ComplexShape
{
private:
    std::queue<Shape*> shapesQueue;
    Display *currentDisplay;
public:
    ComplexShape(Display* w);
    bool add(Shape *o);
    void Draw();
};

#endif /* ComplexShape_hpp */
