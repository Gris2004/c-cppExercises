#ifndef ALGORITHMS_H
#define ALGORITHMS_H

#include <stdio.h>

//fibonacci
int fibonacci[](int var)
{
    int acum = 0;
    int array[var];
    for(int x = 0; x < var; x++)
    {
        acum = acum + x;
        array[x] = acum;
    }
    return array;
}

#endif
