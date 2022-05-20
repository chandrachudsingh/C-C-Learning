//printing prime number from 1-1000
#include<stdio.h>
void main()
{
 int i,j,a;
 printf("prime number=2,3,");
 
 for(i=4;i<=1000;i++)
 {
  a=0;
  for(j=2;j<=i/2;j++)
  {
   if(i%j==0)
   {
    a++;
    break;
   }
  }
  if(a==0)
  printf("%d,",i);
 }
}    
