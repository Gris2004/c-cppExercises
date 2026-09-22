#include "algorithms.h"

int main()
{
    char opt[10]; 
    int singleValue;
    char word[100];

    while(true)
    {
        printf("digit an option\n");
        printf("1=FIBONACCI 2=PRIME_NUMBERS 3=PYRAMIND 4=PALINDROME 5=EXIT\n");
        scanf("%9s", &opt);

        if(opt[0] == '1')
        {
            printf("===fibonacci===\n");
            printf("digit a value for fibonacci\n") && scanf("%d", &singleValue);
            fibonacci(singleValue);
        }
        else if(opt[0] == '2')
        {
            printf("===PRIME NUMBERS===\n");
            printf("Digit a number \n");
            scanf("%d", &singleValue);
            primeNumbers(singleValue);
        }
        else if(opt[0] == '3')
        {
            printf("===PYRAMIND===\n");
            printf("Digit a value for pyramind\n");
            scanf("%d", &singleValue);
            pyramind(singleValue);
        }
        else if(opt[0] == '4')
        {
            printf("===PALINDROME===\n");
            printf("digit a word for palindrome\n");
            scanf("%99s", &word);
            palindrome(word);
        }
        else if(opt[0] == '5')
        {
            printf("see ya!\n");
            break;
        }
    }
    return 0;
}
