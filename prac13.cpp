#include<stdio.h>
int main()
{
int choice,n,rev=0,rem,i,fact,j,max,r,sum,arm;
printf("devina dugar\n");
printf("press 1 to find armstrong no ");
printf("\npress 2 to find out prime upto N");
printf("\npress 3 to reverse a integer");
printf("\npress 4 to exit\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("enter range to print armstrong no.");
scanf("%d",&max);
for(i=1;i<=max;i++){
n=i;
arm=i;
sum=0;
while(n!=0){
r=n%10;
sum+=r*r*r;
n=n/10;
if(sum==arm)
printf("%d\n",sum);
}
}
break;
case 2:
printf("enter a number to print prime number");
scanf("%d",&n);
printf("prime number:\n");
for(i=1;i<=n;i++){
fact=0;
for(j=1;j<=i;j++){
if(i%j==0)
fact++;
}
if(fact==2)
printf("%d\n",i);}
break;
case 3:
printf("Enter an integer");
scanf("%d",&n);
while(n>0){
rem=n%10;
rev=rev*10+rem;
n=n/10;
}
printf("reversed integer:%d",rev);
break;
case 4:
break;
}
return 0;
}

