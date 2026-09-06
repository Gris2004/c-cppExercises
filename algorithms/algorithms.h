#ifndef ALGORITHMS_H
#define ALGORITHMS_H

#include <stdio.h>

void fibonacci(int var)
{
    int a = 0;
    int b = 1;
    int c;

    for(int x = 1; x <= var; x++)
    {
        c = a + b;
        a = b;
        b = c;

        printf("%d \n", c);
    } 
}

#endif
