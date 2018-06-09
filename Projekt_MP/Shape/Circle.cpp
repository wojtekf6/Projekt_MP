#include "Circle.h"

Circle::Circle(Display *w, int r)  : Shape(w)
{
    radius = r;
}

void Circle::Draw()
{
    currentDisplay -> drawCircle(radius);
}
