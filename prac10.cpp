#include<stdio.h>
int main(){
FILE *f1,*f2,*f3;
int number,i;
printf("devina dugar\n");
printf("Enter the Contents:");
f1=fopen("prog","w");
for(i=1;i<6;i++){
scanf("%d",&number);
putw(number,f1);
}
fclose(f1);
f1=fopen("prog","r");
f2=fopen("odd","w");
f3=fopen("even","w");
while((number=getw(f1))!=EOF)
{
if(number%2==0){
putw(number,f3);
}
else{
putw(number,f2);
}
}
fclose(f2);
fclose(f3);
f2=fopen("odd","r");
f3=fopen("even","r");
while((number=getw(f2))!=EOF){
printf("\nOdd No's%d",number);
}
while((number=getw(f3))!=EOF){
printf("\nEven No's%d",number);
}
fclose(f2);
fclose(f3);
return 0;
}

