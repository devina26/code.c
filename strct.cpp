#include<stdio.h>
#include<string.h>
int main()
{
	struct student
	{
		int rollno;
		char name[30];
		float marks[5];
	};
	int i;
	struct student st[5];
	printf("enter the data of students\n");
	for(i=0;i<=5;i++)
	{
		printf("enter the student rollno: ");
		scanf("%d",&st[i].rollno);
		printf("\n enter the student name:");
		scanf("%d",&st[i].name);
        printf("\n enter the student marks:");
		scanf("%f",&st[i].marks);
		printf("\n");
	}
	for(i=0;i<=5;i++)
	{
		printf("%d",st[i].rollno);
	}
	return 0;
		
}
