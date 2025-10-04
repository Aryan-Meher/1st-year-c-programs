//a C program to calculate the sum of the digits of a number.
        #include <stdio.h>
         int main () 
        {
          int number, sum = 0, digit;
           printf("Enter an integer: ");
            scanf("%d", &number);
            while (number > 0)  
           {
        digit=number %10;    // Extract the last digit      
        sum+=digit;                        
         number/=10;               // Remove the last digit
         }
    printf("The sum of the digits is: %d\n", sum);
        return 0;
}

