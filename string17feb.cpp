#include<stdio.h>
#include<string.h>
int main()
{
	char name[15]="devina";
	char name1[15]="dugar";
	char name3[15];
	printf("devina dugar");
    printf("Length of string name: %d", strlen(name));
    printf("\nLength of string name when maxlen is 10: %d", strnlen(name, 10));
    strcat(name, name1);
    printf("\nfull name= %s",name);
    
     return 0;
}
