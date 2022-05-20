//sum of series
#include<stdio.h>
void main()
{
 float sum=0;
 int i,n;
 
 printf("enter series length");
 scanf("%d",&n);
 
 for(i=1;i<=n;i++)
 {
  sum=(1.0)/i;
 }
 printf("sum=%f",sum);
} 
