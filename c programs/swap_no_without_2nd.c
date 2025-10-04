//swap two values without using third variable
#include<stdio.h>
int main()
{
	int num1,num2;
	printf("Enter 1st number:");
	scanf("%d",&num1);
	printf("\nEnter 2nd number:");
	scanf("%d",&num2);
    num1=num1+num2;
	num2=num1-num2;
	num1=num1-num2;
	printf("\nafter swapping 1st number will be:%d",num1);
	printf("\nafter swapping 2nd number will be:%d",num2);
	return 0;	
}
