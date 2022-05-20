//to reverse a number
#include<stdio.h>
void main()
{ int i,n,a,b=0;
 printf("enter a number");
 scanf("%d",&n);
 while(n>0)
 { a=n%10;
   n=n/10;
    b=(b*10)+a;
 }
 printf("the reverse number=%d",b);
 }   
