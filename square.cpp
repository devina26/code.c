#include<stdio.h>
#include<conio.h>

int main()
{
	int num,digit;
	printf("Devina Dugar\n");
	printf("enter a number:");
	scanf("%d",&num);
	digit=num%10;
	if(digit==5)
	{
		num=num/10;
		printf("square:%d%d\n",num*num++,digit*digit);
	}
	else
	printf("invalid number");
return 0;	
}
