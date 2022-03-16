#include<stdio.h>
int main()
{
	union result
	{
		int marks;
		char name[30];
	};
	struct xy
	{
		int age;
		char name[30];
		union result r;
	}
    data;
    union result x;
	printf(" union %d\n",sizeof(data.r));
	printf("structure %d",sizeof(data));
return 0;	
}
