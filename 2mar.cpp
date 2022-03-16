#include<stdio.h>
int main()
{
	union result
	{
		int marks;
		char name[30];
	};
	union result x;
	printf("%d\n",sizeof(x.marks));
	printf("%d",sizeof(x.name));
return 0;	
}
