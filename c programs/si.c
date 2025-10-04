//WAP to display simple interest,where rate,principle and time will be users choice
#include<stdio.h>
int main()
{
	int si,r,p,t;
	printf("enter principle amount:");
	scanf("%d",&p);
	printf("\nenter rate of interest:");
	scanf("%d",&r);
	printf("\nenter time:");
	scanf("%d",&t);
	si=(p*t*r)/100;
	printf("\nsimple interest will be:%d",si);
	return 0;
	
}
