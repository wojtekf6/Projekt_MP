#ifndef Triangle_h
#define Triangle_h

#include "Shape.h"
#include "Display.h"

#include <stdio.h>

class Triangle : public Shape
{
private:
    int a1, a2, b1, b2;
public:
    Triangle(Display *w, int _a1, int _a2, int _b1, int _b2);
    void Draw();
};

#endif /* Triangle_h */
