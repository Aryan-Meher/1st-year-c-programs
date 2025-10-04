//To swap two numbers
#include<stdio.h>
int main()
{
	int num1,num2,a;
	printf("enter 1st number:");
	scanf("%d",&num1);
	printf("enter 2nd number:");
	scanf("%d",&num2);
	a=num1;
	num1=num2;
	num2=a;
	printf("after swapping 1st number will be %d",num1);
	printf("\nafter swapping 2nd number will be %d",num2);
	return 0;
	
}
