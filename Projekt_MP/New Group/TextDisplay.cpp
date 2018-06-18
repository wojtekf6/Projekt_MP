#include "TextDisplay.h"
#include "Exceptions.h"

#include <iostream>

using namespace std;

void TextDisplay::drawTriangle(int a1, int a2, int b1, int b2)
{
    if(!ExceptionsLib::canDraw(a1, a2, b1, b2))
    {
        throw MyRuntimeExceptions::DrawException("Cannot draw this triangle!");
    }
    else
    {
        cout<<"Drawing a triangle from vectors (" << a1 <<", "<<a2<<"), ("<<b1<<", "<<b2<<")."<<endl;
    }
}

void TextDisplay::drawCircle(int r)
{
    if(!ExceptionsLib::canDraw(r))
    {
        throw MyRuntimeExceptions::DrawException("Cannot draw this circle!");
    }
    else
    {
        cout<<"Drawing a circle with radius " << r << "." <<endl;
    }
}

void TextDisplay::drawParallelogram(int a1, int a2, int b1, int b2)
{
    if(!ExceptionsLib::canDraw(a1, a2, b1, b2))
    {
        throw MyRuntimeExceptions::DrawException("Cannot draw this parallelogram!");
    }
    else
    {
        cout<<"Drawing a parallelogram from vectors (" << a1 <<", "<<a2<<"), ("<<b1<<", "<<b2<<")."<<endl;
    }
}
