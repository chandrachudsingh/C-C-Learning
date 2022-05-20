//calculate a power b using function
#include<stdio.h>
int power(int,int);
void main()
{
 int a,b,p;
 
 printf("enter value of a&b");
 scanf("%d%d",&a,&b);

 p=power(a,b);

 printf("result=%d",p);
}
int power(int x,int y)
{
 int i,c=1;

 for(i=0;i<y;i++)
 {
  c=c*x;
 }
return c;
}
