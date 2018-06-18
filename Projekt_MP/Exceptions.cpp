#include "Exceptions.h"

#include <stdio.h>

namespace ExceptionsLib {
    bool canDraw (int a1, int a2, int b1, int b2)
    {
        if(a1*b2 - a2*b1 == 0 || (a1 == 0 && a2 == 0) || (b1 == 0 && b2 == 0))
        {
            return false;
        }
        else
        {
            return true;
        }
    }
    
    bool canDraw(int r)
    {
        if (r <= 0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}
