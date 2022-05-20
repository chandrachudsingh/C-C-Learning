//printing armstrong number from 100-999
#include<stdio.h>
#include<math.h>
void main()
{
 int i,j,n,a,s;
 
 for(i=100;i<1000;i++)
 {
  n=i;
  s=0;
  while(n>0)
  {
   a=n%10;
   n=n/10;
   s=s+pow(a,3);
  }
  if(s==i)
  printf("%d,",i);
 } 
}   
