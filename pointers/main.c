#include<stdio.h>

int main()
{
    //variable
    int a = 9;

    //pinter to A variable
    int *b = &a;

    //print address of A
    printf("%x\n", b);

    //print A's value
    printf("%d\n", *b);
    
    return 0;
}
