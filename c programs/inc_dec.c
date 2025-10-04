//program to explore the uses of increment and decrement (apply pre and post) operators on the user's choice, then finally print the value
#include <stdio.h>
int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("\nOriginal value: %d\n", num);
    printf("Post-increment (num++): %d\n", num++);
    printf("Pre-increment (++num): %d\n", ++num);
   printf("Value after pre and post-increment: %d\n", num);
   printf("Post-decrement (num--): %d\n", num--);
   printf("Pre-decrement (--num): %d\n", --num);
    printf("Value after pre and post-decrement: %d\n", num);
    return 0;
  }

