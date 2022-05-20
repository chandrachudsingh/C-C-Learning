//perfect number
#include<stdio.h>
void main()
{
 int i,n,sum=0;
 
 printf("enter a number");
 scanf("%d",&n);
 
 for(i=1;i<=n/2;i++)
 {
  if(n%2==0)
  sum=sum+i;
 }
 if(n==sum)
 printf("number is perfect");
 else
 printf("number is not perfect");
}  
