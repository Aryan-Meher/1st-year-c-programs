//WAP in C to compute the area of a circle and a rectangle, where the radius will be the user's choice.
#include<stdio.h>
int main()
{
	int r,l,b,ac,ar;
	printf("enter the radius of circle:");
	scanf("%d",&r);
	ac=3.14*r*r;
	printf("\nenter the length of rectangle:");
	scanf("%d",&l);
	printf("\nenter the breadth of rectangle:");
	scanf("%d",&b);
	ar=l*b;
	printf("\nthe area of circle is:%d",ac);
	printf("\nthe area of rectangle is:%d",ar);
	return 0;
}
