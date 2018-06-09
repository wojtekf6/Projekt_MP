#ifndef Parallelogram_h
#define Parallelogram_h

#include "Shape.h"
#include "Display.h"

#include <stdio.h>

class Parallelogram : public Shape
{
private:
    int a1, a2, b1, b2;
public:
    Parallelogram(Display *w, int _a1, int _a2, int _b1, int _b2);
    void Draw();
};

#endif /* Parallelogram_h */
