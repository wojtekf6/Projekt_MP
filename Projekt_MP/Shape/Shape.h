#ifndef Shape_h
#define Shape_h

#include "Display.h"

#include <stdio.h>

class Shape
{
public:
    Display *currentDisplay;
    
    Shape(Display *w);
    void changeDisplay(Display *newDisplay);
    virtual void Draw() = 0;
    virtual ~Shape(){}
};

#endif /* Shape_h */
