#include<stdio.h>
int main()
{
	int arr[10],size,i, search, flag, temp=0;
	printf("devina dugar");
	printf("\n enter the size of array: ");
	scanf("%d",&size);
	
	printf("\n enter %d elements of an array: \n",size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
		
	}
	printf("\nPlease Enter the Search Element:");
	scanf("%d",&search);
	flag=0;
	for(i=0;i<size;i++)
	{
		if(arr[i]==search)
		{
			flag=1;
			break;
		}
	}
	if (flag==1)
	{
		printf("\n we found the search element %d at position %d:\n",search,i+1);
	}
	else
	{
		printf("\n sorry! we haven't found the search element %d'\n",search);
	}
	for(i=0;i<size;++i)
	{
		for(int j=i+1;j<size;++j)
		{
		 if(arr[i]>arr[j])
		 {
		 	temp=arr[i];
		 	arr[i]=arr[j];
		 	arr[j]=temp;
		 }
		
		}
	}
	printf("the numbers in ascending order is:\n");
	for(i=0;i<size;++i)
	{
		printf("%d\n",arr[i]);
	}
	return 0;

}
