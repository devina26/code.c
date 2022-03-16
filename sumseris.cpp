#include<stdio.h>
int main() {
	int n,i;
	int sum=0;
	printf("devina dugar\n");
	printf("Enter the values of series: ");
	scanf("%d",&n);
	sum = (n * (n + 1)) / 2;
	printf("Sum of the series: ");
	for (i =1;i <= n;i++) {
		if (i!=n)
		  printf("%d + ",i); 
		else
	      printf("%d = %d ",i,sum);
	}
	return 0;
}
