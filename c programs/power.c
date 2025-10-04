//a C program to find the power of a number using a for loop
#include <stdio.h>
int main() 
{
    int base, exp,i;
    long long result = 1;   // to store large results
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exp);
     for (i = 1; i <= exp; i++) 
     {
        result =result*base;
    }
    printf("%d^%d = %lld\n", base, exp, result);
    return 0;
}

