#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,ch;
	printf("Devina Dugar\n");
	printf("enter the first number:");
	scanf("%d",&a);
	printf("enter the second number:");
	scanf("%d",&b);
	printf("Arithemetic functions:\n");
	printf("addition:\n");
	printf("substraction:\n");
	printf("multiplication:\n");
	printf("division:\n");
	printf("modulas:\n");
	printf("enter your choice\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			c=a+b;
			printf("%d",c);
			break;
		case 2:
			c=a-b;
			printf("%d",c);
			break;
		case 3:
			c=a*b;
			printf("%d",c);
			break;
		case 4:
			c=a/b;
			printf("%d",c);
			break;
		case 5:
			c=a%b;
			printf("%d",c);
			break;
		default:
		printf("Wrong output:");	
	}
return 0;	
}
