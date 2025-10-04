//display a multiplication table using a nested for loop
 #include <stdio.h>
int main() 
{
    int i, j;
    printf("Multiplication Tables (1 to 10):\n");
    for (i = 1; i <= 10; i++)       
   {           
        printf("\nTable of %d:\n", i);  // outer loop ? table number
        for (j = 1; j <= 10; j++) 
       {       
            printf("%d x %d = %d\n", i, j, i * j);  // inner loop ? multiples 
        }
    }
    return 0;
}

