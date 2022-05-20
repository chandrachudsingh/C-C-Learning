//swapping using pointer
#include<stdio.h>
void main()
{
 int a,b,*p,*q,*r;
 
 printf("enter two numbers");
 scanf("%d%d",&a,&b);
 
 p=&a;
 q=&b;
 
 *r=*q;
 *q=*p;
 *p=*r;
 
 printf("a=%d,b=%d",*p,*q);
}
