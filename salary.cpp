#include<stdio.h>
#include<conio.h>
int main()

{
	printf("Devina Dugar\n");
	int sales;
	float salary1, salary2;
	printf("enter total sales:\n");
	scanf("%d", &sales);
	if(sales>= 100000)
	   salary1 = 3000+(0.2*3000)+(1.1*3000)+500+(sales*0.1)+500;
	   {
	   	printf("your salary is %f\n",salary1);
	   }
	if(sales<100000)
	{
		salary2=3000+(0.2*3000)+(1.1*3000)+500+(sales*0.05)+200;
		printf("your salary is %f\n",salary2);
	}
	return 0;
	
}