#include "GraphicalDisplay.h"
#include "Exceptions.h"

#include <iostream>
#include <cmath>

using namespace std;

int GraphicalDisplay::greaterThan(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    
    return b;
}


bool GraphicalDisplay::isInside (int x, int y, int Bx, int By, int Cx, int Cy)
{
    double divide=Bx * Cy - By * Cx;
    double edgeA=(x*Cy - y * Cx) / divide;
    double edgeB=(y*Bx - x * By) / divide;
    double edgeC=edgeA + edgeB;
    
    return edgeA >= 0 && edgeB >= 0 && edgeC <= 1;
    
}

void GraphicalDisplay::drawTriangle(int a1, int a2, int b1, int b2)
{
    if(!ExceptionsLib::canDraw(a1, a2, b1, b2))
    {
        throw MyRuntimeExceptions::DrawException("Cannot draw this triangle!");
    }
    else
    {
        for (int i = a2; i >= b2; i--)//y
        {
            for (int j = 0; j <= greaterThan(a1, b1); j++)//x
            {
                if (isInside(j, i, a1, a2, b1, b2))
                {
                    cout << "t";
                }
                else
                {
                    cout << " ";
                }
            }
            cout << endl;
        }
    }
}

void GraphicalDisplay::drawCircle (int r)
{

    if (!ExceptionsLib::canDraw(r))
    {
        throw MyRuntimeExceptions::DrawException("Cannot draw this circle!");
    }
    else
    {
        const int Ax=0;
        const int By=0;
        
        int *x = new int[2*r*r];
        int *y = new int[2*r*r];
        
        int counterForX=-r;
        int counterForY=r;
        
        for (int i = 0; i<(r*2)+1; i++)
        {
            x[i] = counterForX;
            counterForX++;
        }
        
        
        for (int j = 0; j < r * 2 + 1; j++)
        {
            y[j] = counterForY;
            counterForY--;
        }
        
        
        for (int i = 0; i <r * 2 + 1; i++)//y
        {
            for (int j = 0; j < 2 * r + 1; j++)//x
            {
                
                if (pow(x[j]-Ax,2)+pow(y[i]-By,2)<=r*r)
                {
                    cout << "c";
                }
                else
                {
                    cout << " ";
                }
                
            }
            cout << endl;
        }
        delete[] x;
        delete[] y;
    }
}


void GraphicalDisplay::drawParallelogram(int a1, int a2, int b1, int b2)
{
    if(!ExceptionsLib::canDraw(a1, a2, b1, b2))
    {
        throw MyRuntimeExceptions::DrawException("Cannot draw this parallelogram!");
    }
    else
    {
        int c1 = a1 + b1;
        int c2 = a2 + b2;
        
        for (int i = a2; i >= b2; i--)//y
        {
            for (int j = 0; j < c1; j++)//x
            {
                if (isInside(j, i, a1, a2, c1, c2) || isInside(j, i, b1, b2, c1, c2))
                {
                    cout << "p";
                }
                else
                {
                    cout << " ";
                }
            }
            cout << endl;
        }
    }
}
