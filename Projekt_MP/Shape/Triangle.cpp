#include "Triangle.h"

Triangle::Triangle(Display *w, int _a1, int _a2, int _b1, int _b2) : Shape(w)
{
    a1 = _a1;
    a2 = _a2;
    b1 = _b1;
    b2 = _b2;
}

void Triangle::Draw()
{
    currentDisplay -> drawTriangle(a1, a2, b1, b2);
}
