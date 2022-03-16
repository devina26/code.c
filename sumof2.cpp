#include<stdio.h>
#include<conio.h>
int main()
{
	printf("Devina Dugar\n");
	int a,b,choice;
	printf("Enter the a: ");
	scanf("%d",&a);
	printf("enter the b: ");
	scanf("%d",&b);
	
	printf("1.addition\n");
	printf("2.substraction\n");
	printf("3.multiplication\n");
	printf("4.division\n");
	
	printf("enter the choice: ");
	scanf("%d",&choice);
	
	if(choice==1)
	{
		printf("Addition of two variables is=%d\n",(a+b));	
	}
	else if (choice==2)
	{
		printf("Subtraction of two variables is=%d\n",(a-b));
	}
	else if(choice==3)
	{
		printf("multiplication of two variables is=%d\n",(a*b));
	}
	else if(choice==4)
	{
		printf("division of two variables is=%d\n",(a/b));
	}
	else
	{
		printf("Invalid choice");	
	}
			
return 0;
	
}
