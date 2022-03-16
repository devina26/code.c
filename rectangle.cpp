#include<stdio.h>
int main()
{
	int num,num1.sum=0,a;
	printf("devina dugar\n");
	printf("enter a number: ");
	scanf("%d",&num);
	num1=num;
	while(num!=0)
	{
		a=num%10;
		num=num/10;
		sum=sum+(a*a*a);
	}
	if(sum==num1)
	   printf("%d is an armstrong number ",num1);
    else
	   printf("%d is not an armstrong number",num1);
	return 0;
}
