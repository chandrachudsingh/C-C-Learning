//transpose of a matrix
#include<stdio.h>
void main()
{
 int i,j,r,c;

 printf("enter no. of rows and columns");
 scanf("%d%d",&r,&c);

 int a[r][c],b[r][c];
 
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  {
   printf("enter matrix elements");
   scanf("%d",&a[i][j]);
  }
 }
 for(j=0;j<c;j++)
 {
  for(i=0;i<r;i++)
  {
   b[j][i]=a[i][j];
   printf("%d ",b[j][i]);
  }
  printf("\n");
 }
}

