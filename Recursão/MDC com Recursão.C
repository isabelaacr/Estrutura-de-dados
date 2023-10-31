#include <stdio.h>

mdc (int x, int y)
{
    int r = x % y;
    if (r == 0)
    return y;
    else 
    return mdc (y, r);
}
