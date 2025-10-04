//explore the bitwise operators (bitwise AND, OR, left shift, right shift, and complement) on the user's choice value.
#include <stdio.h>
int main() 
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("Result bitwise %d | %d=%d\n", num1, num2, num1 | num2);
    printf("Result bitwise %d & %d=%d\n", num1, num2, num1 & num2);
    printf("Result of %d << 1 = %d\n", num1, num1 << 1);
    printf("Result of %d << 1 = %d\n", num2, num2 << 1);
    printf("Result of %d >> 1 = %d\n", num1, num1 >> 1);
    printf("Result of %d >> 1 = %d\n", num2, num2 >> 1);
    printf("Result of ~%d = %d\n", num1, ~num1);
    printf("Result of ~%d = %d\n", num2, ~num2);
   return 0;
}
