//C program to check whether a number is an Armstrong number.
#include <stdio.h>
#include <math.h>   //pow() function
int main() 
{
    int num, original, remainder, n = 0,temp;
    double result = 0.0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    original = num;
    temp = num;
                                            // Step 1: count number of digits
    while (temp != 0) {
        temp /= 10;
        n++;
    }
    temp = num;
    while (temp != 0)   
    {
        remainder = temp % 10;
        result =result+pow(remainder, n);
        temp /= 10;           //or temp=temp/10
    }

    if ((int)result == original)
        printf("%d is an Armstrong number.\n", original);
    else
        printf("%d is not an Armstrong number.\n", original);

    return 0;
}
 
