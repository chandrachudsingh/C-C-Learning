//pass a value and double the value
#include<stdio.h>
void dbl(int *);
void main()
{
 int a=100;
 dbl(&a);
 printf("2a=%d",a);
}
void dbl(int *p)
{
 *p=2*(*p);
}
