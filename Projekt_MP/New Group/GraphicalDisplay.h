#ifndef GraphicalDisplay_h
#define GraphicalDisplay_h

#include "Display.h"

#include <stdio.h>

class GraphicalDisplay : public Display
{
public:
    void drawTriangle(int a1, int a2, int b1, int b2);
    void drawCircle(int r);
    void drawParallelogram(int a1, int a2, int b1, int b2);
};

#endif /* GraphicalDisplay_h */
