//HCF 
#include<stdio.h>
void main()
{
 int a,b,min,i;
 
 printf("enter two numbers");
 scanf("%d%d",&a,&b);
 
 min=(a>b)?b:a;
 
 for(i=min/2;i>=1;i--)
 {
  if(a%i==0&&b%i==0)
  {
   printf("HCF=%d",i);
   break;
  }
 }
}
