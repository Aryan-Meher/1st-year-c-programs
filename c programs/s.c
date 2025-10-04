//	S = x + x2 + x3 + x4......+ x9 + x10 
#include <stdio.h> 
int main()
 {
    int x;
    long sum = 0, term = 1;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    for (int i = 1; i <= 10; i++) 
   {
        term *= x;      // compute x^i step by step
        sum += term;
    }
    printf("The sum S = x + x^2 + ... + x^10 is: %lld\n", sum);
    return 0;
}


