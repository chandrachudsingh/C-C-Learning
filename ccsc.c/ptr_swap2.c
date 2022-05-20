//pass two variables and swap
#include<stdio.h>
void swap(int *,int *);
void main()
{
 int a=100,b=200;
printf("in main");
 swap(&a,&b);
 printf("after function");
 printf("value after swapping a=%d,b=%d",a,b);
}
void swap(int *p,int *q)
{
printf("in fun");
 int temp;
 temp=*p;
 *p=*q;
 *q=temp;
}
