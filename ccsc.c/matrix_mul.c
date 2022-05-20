//matrix multiplication
#include<stdio.h>
void main()
{ 
 int a[3][3],b[3][3],c[3][3],i,k,j,sum=0;

 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   printf("enter 1st array elements");
   scanf("%d",&a[i][j]);
  }
 }
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   printf("enter 2nd array elements");
   scanf("%d",&b[i][j]);
  }
 }
 for(i=0;i<3;i++)
 {for(j=0;j<3;j++)
  {for(k=0;k<3;k++)
   {
    sum=sum+(a[i][j]*b[i][j]);
   }
   c[i][j]=sum;
   sum=0;
  }
 }
printf("product of matrices\n");
 
 for(i=0;i<3;i++)
 {for(j=0;j<3;j++)
  {
   printf("%d\t",c[i][j]);
  }
  printf("\n");
 }
}
