#include<stdio.h>
#include<conio.h>
int main(){
struct student{
char name[20];
int rollno[5];
char course[10];
};
int i;
struct student s1[5];
printf("devina dugar\n");
for(i=0;i<5;i++){
printf("\nEnter the Name, RollNo. and Course\n");
scanf("%s %d %s",s1[i].name,&s1[i].rollno[i],s1[i].course);
}
for(i=0;i<5;i++){
printf("%s %d %s\n",s1[i].name,s1[i].rollno[i],s1[i].course);
}
return 0;
}

