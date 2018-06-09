#ifndef TextDisplay_h
#define TextDisplay_h

#include "Display.h"

#include <stdio.h>

class TextDisplay : public Display
{
    void drawTriangle(int a1, int a2, int b1, int b2);
    void drawCircle(int r);
    void drawParallelogram(int a1, int a2, int b1, int b2);
};

#endif /* TextDisplay_h */
