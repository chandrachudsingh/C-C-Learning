//addition of two numbers
#include<stdio.h>
void add(int,int);
void main()
{
 int a,b;
 printf("enter two numbers");
 scanf("%d%d",&a,&b);

 add(a,b);
}
void add(int x,int y)
{
 int c;
 c=x+y;
 printf("addition=%d",c);
}
