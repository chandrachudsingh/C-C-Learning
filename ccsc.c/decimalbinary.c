//decimal to binary conversion
#include<stdio.h>
void main()
{
 int n,b,a,s=0,x=0;
 
 printf("enter a decimal number");
 scanf("%d",&n);
 
 b=n;
 while(n>1)
 {
  a=n%2;
  n=n/2;
  s=(s*10)+a;
 }
 s=(s*10)+1;
 
 while(s>0)
 {
  a=s%10;
  s=s/10;
  x=(x*10)+a;
 }
 printf("binary number of %d=%d",n,x);
}
