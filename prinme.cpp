#include<stdio.h>
int prime(int n);

int main()
{
	int i,size;
	printf("devina dugar\n");
    printf("enter array length:");
    scanf("%d",&size);
    
    int arr[size];
    printf("enter the array elements: ");
    for(i=0; i<size; i++)
    {
    	scanf("%d",&arr[i]);
	}
	printf("\nArray elements with their addresses:\n");
	for(i=0; i<size; i++)
	{
		printf("value of arr[%d]=%d\t",i,arr[i]);
		printf("address of arr[%d]=%p\n",i,&arr[i]);
	}
	return 0;    
}

