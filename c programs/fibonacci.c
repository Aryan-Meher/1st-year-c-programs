//C program to print the Fibonacci series up to n terms, using your nth term.
             #include <stdio.h>
int main()
 {
    int n, first = 0, second = 1, next, i;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series up to %d terms:\n", n); 
    if (n >= 1) 
     { 
        printf("%d ", first);  // print first term
     }
    if (n >= 2) 
    {
        printf("%d ", second); // print second term
    }
    for (i = 3; i <= n; i++) 
   {
        next = first + second;
        printf("%d ", next);
        first = second;
        second = next;
       }
     printf("\n");
    return 0;
}

