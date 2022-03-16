#include<stdio.h>
int validationtime(int hh, int mm, int ss)
{
	int ret=0;
	if(hh>24) ret=1;
	if(mm>60) ret=1;
	if(ss>60) ret=1;
	return ret;
}
int main()
{
	char string[100]={0};
	
	int ret=0,hour=0,min=0,sec=0;
	printf("devina dugar\n");
	printf("\n enter the time in\"hh:mm:ss\"format: ");
	fgets(string, 100, stdin);
	scanf(string,"%d:%d:%d",&hour,&min,&sec);
	ret= validationtime(hour,min,sec);
	if(ret)
	{
		printf("\n invalid time, try again");
	}
	else
	{
		printf("\n the time is %d:%d:%d\n",hour,min ,sec);
	}
	return 0;
}
