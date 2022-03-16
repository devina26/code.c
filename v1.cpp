#include<stdio.h>
#include<conio.h>

int main()
{
	printf("DEVINA DUGAR\n");
	float radius,perimeter,area;
	float pi=3.14;
	printf("enter the radius of a circle");
	scanf("%f",&radius);
	perimeter=2*pi*radius;
	area=pi*radius*radius;
	printf("perimeter of a circle: %f\n",perimeter);
	printf("area of a circle: %f\n",area);
	
return 0;	
	
}

