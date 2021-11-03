// programe for area of the circle
#include<stdio.h>

void main()
{
	int radius;
	float area_of_the_circle;
	printf("enter the radius of the circle :");
	scanf("%d",&radius);
	area_of_the_circle = ((22/7)*radius*radius);
	printf("area of the circle %f when radius(s) is %d",area_of_the_circle,radius);
}
