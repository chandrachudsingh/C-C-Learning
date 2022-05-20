//sum of series
#include<stdio.h>
void main()
{
 float sum=0,a=1;
 int i,j,n;
 
 printf("enter series length");
 scanf("%d",&n);
 
 for(i=1;i<=n;i++)
 {
  for(j=i;j>=1;j--)
  {
   a=(1.0/j)*a;
  }
  sum=sum+a;
 }
 printf("sum=%f",sum);
}   
