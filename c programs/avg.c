//Program to find the average of 3 numbers, where values should be entered through the keyboard.
#include<stdio.h>
int main()
{
	int a,b,c,avg;
	printf("\nenter three numbers:\n");
	scanf("%d %d %d",&a,&b,&c);
	avg=(a+b+c)/3;
	printf("\nthe avarage will be:%d",avg);
	return 0;
}
