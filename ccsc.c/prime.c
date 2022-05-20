//prime no
#include<stdio.h>
void main()
{
  int n,i,a=0;
  
  printf("enter a number");
  scanf("%d",&n);
  if(n>1)
  {
   for(i=2;i<=n/2;i++)
   {
    if(n%i==0)
    {
	  a++;
     break;
	}	
   }
   if(n<4)
   	a=0;
   }
   if(a==0)
   printf("prime number");
   else
   printf("not prime");
}
