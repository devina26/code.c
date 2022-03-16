#include<stdio.h>
#include<math.h>
int main()
{
	printf("Devina Dugar\n");
	int num=1,n,factorial=1;
	printf("enter your number:");
	scanf("%d",&n);
	for(num=1;num<=n;num++)
	{
		factorial*=num;
	}

	printf("factorial of%d=%4d\n",n,factorial);
	return 0;
	
}
