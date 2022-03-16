#include <stdio.h>
#include<string.h>
 
int main()
{
    char a[6]="hello";
    char b[4]="hey";
    char c[10];
    strcpy(c,strcat(a,b));
    puts(c);
}
