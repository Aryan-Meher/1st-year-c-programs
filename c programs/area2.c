//To compute the volume of the sphere
#include<stdio.h>
int main()
{
	float r,l,h,vs,vc;
	printf("enter the radius of sphere:");
	scanf("%f",&r);
	vs=(4.0/3.0)*3.14*r*r*r;
	printf("\nenter the radius of cylinder:");
	scanf("%f",&l);
	printf("\nenter the height of cylinder:");
	scanf("%f",&h);
	vc=3.14*l*l*h;
	printf("\nthe volume of sphere will be:%f",vs);
	printf("\nthe volume of cylinder will be:%f",vc);
	return 0;	
}
