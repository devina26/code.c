#include<stdio.h>
#include<conio.h>
int main()
{
	int age,count=0,x=1;
	float wt;
	printf("devina dugar\n");
	printf("\nenter the data of 10 students:\n");
	printf("\nage weight\n");
	do
	{
		scanf("%d %f",&age,&wt);
		if(age<25 && wt<50);
		{
			count++;
		}
		x++;
	}
	while(x<=10);
	printf("number of students with age <25");
	printf(" and weight<50 kgs=%d\n",count);
return 0;	
}
