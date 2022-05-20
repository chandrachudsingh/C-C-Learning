//accept n numbers and show how many are even and odd
#include<stdio.h>
void main()
{
 int i,n,x,a=0,b=0;
 
 printf("how many terms");
 scanf("%d",&n);
 
 for(i=1;i<=n;i++)
 {
  printf("enter a number");
  scanf("%d",&x);
  
  if(x==0)
  printf("neither even nor odd\n");
  else
  {
   if(x%2==0)
   a++;
   else
   b++;
  }
 }
 printf("even numbers=%d, odd numbers=%d",a,b);
}   
