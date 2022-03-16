#include<stdio.h>
#include<string.h>
#include<conio.h>
int main(){
char name[100];
char name1[100];
char temp[100];
int c,n;
printf("devina dugar\n");
printf("Enter the String:");
scanf("%s",name);
printf("\nPress 1 for finding the length of a String");
printf("\nPress 2 for concatenate");
printf("\nPress 3 for copy the string");
printf("\nPress 4 for comparing");
printf("\nPress 5 for n element");
printf("\n:");
scanf("%d",&c);
switch(c){
case 1:
printf("%d",strlen(name));
break;
case 2:
strcpy(temp,name);
printf("Enter another string");
scanf("%s",name1);
strcat(temp,name1);
printf("\nConcatenation is %s",temp);
break;
case 3:
strcpy(temp,name);
printf("String is copied in another variable temp %s",temp);
break;
case 4:
printf("Enter the String For Comparing:");
scanf("%s",temp);
if(strcmp(name,temp)==0){
printf("It is identical");
}
else{
printf("Not identical");
}
break;
case 5:
printf("How many character do you to copy from the above string:");
scanf("%d",&n);
strncpy(temp,name,n);
printf("\nResulted String is %s",temp);
break;
default:
printf("Wrong Input");
break;
}
return 0;
}

