#ifndef ALGORITHMS_H
#define ALGORITHMS_H

#include <stdio.h>
#include <stdbool.h>

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

//check if the number is prime or no
//param: int { int } var - range for the prime numbers
void primeNumbers(int var)
{
    if(var < 2)
    {
        printf("1 y menores no son primos");
        return;
    }

    bool isPrime = false;
    float quotient;

    for(int x = 2; x < var; x++)
    {
        quotient = var % x;
        if(quotient != 0) isPrime = true;
        if(quotient == 0)
        {
            isPrime = false;
            printf("number isn't prime");
            break;
        }
    }

    if(isPrime) printf("number: %d is prime", var);
}

//makes a pyramind with a rage number
//param: var - range for the pyramind
void pyramind(int var)
{
    for(int x = 0; x <= var; x++)
    {
        for(int y = 0; y < x; y++)
        {
            printf("*");
        }
        printf("\n");
    }
}

#endif
