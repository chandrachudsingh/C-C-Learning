//sum of diagonal elements of matrix
#include<stdio.h>
void main()
{
 int i,j,n,sum=0;

 printf("enter order of matrix");
 scanf("%d",&n);

 int a[n][n];

 printf("enter matrix elements\n");

 for(i=0;i<n;i++)
 {for(j=0;j<n;j++)
  {
   scanf("%d",&a[i][j]);
  }
 }
 for(i=0;i<n;i++)
 {
  sum=sum+a[i][i];
 }
printf("sum=%d",sum);
}
