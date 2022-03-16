#include<ctype.h>
#include<stdio.h>
#include<stdlib.h>
void main()
{
	char d;
	int f;
	printf("devina dugar\n");
	printf("enter any character: ");
	d=getche();
	  f=isalpha(d);
	  if(f!=0)
	  {
	  	printf("\n%c is a letter in",d);
	  	f=isupper(d);
	  	if(f!=0)
	  	printf("capital case");
	  	else
	  	printf("small case");
	  }
	  else
	  {
	  	f=isdigit(d);
	  	if(f!=0)
	  	printf("\n %c is a digit",d);
	  	else
	  	{
	  		f=ispunct(d);
	  		if(f!=0)
	  		printf("\n %c is a punctuation symbol",d);
	  		
	     }
    	}
 getche();
}
