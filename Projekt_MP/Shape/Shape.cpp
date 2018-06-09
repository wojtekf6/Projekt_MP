#include "Shape.h"

Shape::Shape(Display *w)
{
    currentDisplay = w;
}

void Shape::changeDisplay(Display *newDisplay)
{
    currentDisplay = newDisplay;
}
