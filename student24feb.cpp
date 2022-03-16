#include<stdio.h>  
#include <string.h>    
struct student{    
int rollno;    
char name[10]; 
float marks[5];   
};    
int main(){    
int i ;
float avg;    
struct student st[5];    
printf("Enter Records of 5 students");    
for(i=0;i<5;i++){    
printf("\nEnter Rollno:");    
scanf("%d",&st[i].rollno);    
printf("\nEnter Name:");    
scanf("%s",&st[i].name);  
printf("\n enter marks of five subjects:");
scanf("%f",&st[i].marks);
for (i=0;i<=5;i++)
{
	p
 } 
}    
printf("\nStudent Information List:");    
for(i=0;i<5;i++){    
printf("\nRollno:%d, Name:%s marks:%d",st[i].rollno,st[i].name,st[i].marks);    
}    
printf("total of five subject marks")
   return 0;    
}
