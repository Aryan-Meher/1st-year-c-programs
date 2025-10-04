//To check whether the number entered is odd or even
#include<stdio.h>
int main()
{
	int n;
	printf("enter your number:");
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("the no. you have entered is even");
	}
	else
	{
		printf("the no. you have entered is odd");
	}
	return 0;
}
