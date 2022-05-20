//pass three values for sum
#include<stdio.h>
void sum(int *,int *,int *);
void main()
{
 int a,b,c;
 
 printf("enter two numbers");
 scanf("%d%d",&a,&b);
 
 sum(&a,&b,&c);
 
 printf("sum=%d",c);
}
void sum(int *p,int *q,int *r)
{
 *r=*p+*q;
}
