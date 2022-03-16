#include<stdio.h>
struct employee
{
	int employeeid;
	char empname[100];
	int age;
	char address[100];
	char department[100];
	int slary;
};
int main(void)
{
	struct employee emp[100];
	int n, i,key;
	printf("devina dugar\n");
	printf("enter the number of employees: ");
	scanf("%d",&n);
	{
	printf("enter the details of employees %d:\n ",i+1);
	printf("employee id:");
	scanf("%d",&emp[i].employeeid);	
	printf("\nemployee name:");
	scanf("%s",&emp[i].empname);
	printf("\nemployee age:");
	scanf("%d",&emp[i].age);
	printf("\nemployee address:");
	scanf("%s",&emp[i].address);
	printf("\n employee department:");
	scanf("%s",&emp[i].department);
	printf("\nemployee salary:");
	scanf("%d",&emp[i].slary);
}
	printf("enter the id of employee to print the details:\n");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(emp[i].employeeid==key)
		{
			printf("details of employee %d is : \n",emp[i].employeeid);
			printf("name=%s\n",emp[i].empname);
			printf("age=%d\n",emp[i].age);
			printf("address=%s\n",emp[i].address);
			printf("department=%s\n",emp[i].department);
			printf("salary=%d\n",emp[i].slary);
			break;
		}
	}
	return 0;
}
