#include<stdio.h>
int main()
{
	int num,r,temp,sum=0;
	printf("devina dugar\n");
	printf("enter any number to check amrstrong:");
	scanf("%d",&num);
	temp=num;
	while(num!=0)
	{
		r=num%10;
		num=num/10;
		sum=sum+(r*r*r);
	}
if(sum==temp)
   printf("%d is an armstrong number",temp);
else
   printf("%d is not an armstrong number",temp);
return 0;
}
