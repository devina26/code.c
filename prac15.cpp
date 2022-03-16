#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void add(int m[3][3], int n[3][3], int sum[3][3]);
void subtract(int m[3][3], int n[3][3], int sub[3][3]);
void multiply(int m[3][3], int n[3][3], int mul[3][3]);
void transpose(int matrix[3][3], int trans[3][3]);
void display(int matrix[3][3]);
int main()
{
   int a[][3] = {{5,6,7},{8,9,10},{3,1,2}};
   int b[][3] = {{1,2,3},{4,5,6},{7,8,9}};
   int c[3][3];
   printf("devina dugar\n");
   printf("First Matrix:\n");
   display(a);
   printf("Second Matrix:\n");
   display(b);
   int choice;
   do
   {
      printf("\nChoose the matrix operation\n");
      printf("1. Addition\n");
      printf("2. Subtraction\n");
      printf("3. Multiplication\n");
      printf("4. Transpose\n");
      printf("5. Exit\n");
      printf("----------------------\n");
      printf("Enter your Choice");
      scanf("%d",&choice);
      switch(choice)
      {
         case 1:
                     add(a,b,c);
                     printf("Sum of matrix:\n");
                     display(c);
                     break;
         case 2:
                     subtract(a,b,c);
                     printf("Subtraction of matrix:\n");
                     display(c);
                     break;
          case 3:
                     multiply(a,b,c);
                     printf("Multiplication of matrix:\n");
                     display(c);
                     break;
           case 4:
                     printf("Transpose of first matrix:\n");
                     transpose(a,c);
                     display(c);
                     printf("Transpose of Second matrix:\n");
                     transpose(b,c);
                     display(c);
                     break;
           case 5:
                   exit(0);
           default:
                      printf("You have entered wrong choice\n");
      }
}
while(1);
}

void add(int m[3][3], int n[3][3], int sum[3][3])
{
   int i,j;
   for(i=0;i<3;i++)
    for(j=0;j<3;j++)
      sum[i][j] = m[i][j] + n [i][j];
}
void subtract(int m[3][3], int n[3][3], int sub[3][3])
{
   int i,j;
   for(i=0;i<3;i++)
    for(j=0;j<3;j++)
      sub[i][j] = m[i][j] - n [i][j];
}
void multiply(int m[3][3], int n[3][3], int mul[3][3])
{
   int i,j,k;
   for(i=0;i<3;i++)
    for(j=0;j<3;j++)
     {
        mul[i][j]=0;
        for(k=0;k<3;k++)
        {
           mul[i][j] += (m[i][k] * n[k][j]); //m[0][0]*n[0][0] //m[0][1]*n[1][0]
         }
      }
}

void transpose(int matrix[3][3], int trans[3][3])
{
    int i,j;
    for(i=0;i<3;i++)
      for(j=0;j<3;j++)
         trans[i][j] = matrix[j][i];
}

void display(int matrix[3][3])
{
 int i,j;
    for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
        printf("%d\t",matrix[i][j]);
       printf("\n");
    }
}

