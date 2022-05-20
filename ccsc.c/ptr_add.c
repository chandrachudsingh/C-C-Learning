//adding using pointer
#include<stdio.h>
void main()
{
 int a=100,b=200,c=0;
 int *p,*q,*r;
 
 p=&a;
 q=&b;
 r=&c;
 
 *r=*p+*q;
 
 printf("a=%d\n",*p);
 printf("b=%d\n",*q);
 printf("c=%d\n",*r);
}
