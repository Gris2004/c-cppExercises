#ifndef ALGORITHMS_H
#define ALGORITHMS_H

#include <stdio.h>
#include <errno.h>

//param: { int } var - range for the fibonacci
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

//param: int { int } var - range for the prime numbers
void primeNumbers(int var)
{
    int countPrimes;
    float quotient;

    if(var < 2)
        perror("no se aceptan valores menores a 2");

    for(int x = 2; x <= var; x++)
    {
        for(int y = 2; y <= var; y++)
        {
            quotient = var % y;
            if( y != var)
            {
                if(quotient != 0)
                {
                    printf("numero: %d es primo", x);
                    countPrimes++;
                }
            }
        }
    }
}

#endif
