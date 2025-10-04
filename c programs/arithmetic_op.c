//WAP to perform arithmetic oprations on two values entered through the keyboard
#include<stdio.h>
int main()
{
	int num1,num2,sum,sub,mul,div;
	printf("enter the value of first number:");
	scanf("%d",&num1);
	printf("\nenter the value of seond number:");
	scanf("%d",&num2);
	printf("\nResult of arithmatic operation");
	sum=num1+num2;
	printf("\nResult of addition:%d",sum);
	sub=num1-num2;
	printf("\nResult of subtraction:%d",sub);
	mul=num1*num2;
	printf("\nResult of multiplication:%d",mul);
	div=num1/num2;
	printf("\nResult of division:%d",div);
	return 0;
}
