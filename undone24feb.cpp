#include<stdio.h>
#include<string.h>
int main()
{
	int i
	struct student
	{
		int rollno;
		char name[30];
	};
	struct student st[10];
	printf("enter the data of students\n");
	for(i=0,i<=10;i++)
	{
		printf("enter the student rollno: ");
		scanf("%d",&st[i].rollno);
		printf("\n enter the student number:");
		scanf("%d",&st[i].name);
	}
}
