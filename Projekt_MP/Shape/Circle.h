#ifndef Circle_h
#define Circle_h

#include "Shape.h"
#include "Display.h"

#include <stdio.h>

class Circle : public Shape
{
private:
    int radius;
public:
    Circle(Display *w, int r);
    void Draw();
};

#endif /* Circle_h */
