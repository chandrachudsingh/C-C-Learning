//factorial by fuunction
#include<stdio.h>
void fact(int);
void main()
{
 int n;
 
 printf("enter a number");
 scanf("%d",&n);

 fact(n);
}
void fact(int c)
{
 int f=1;

 while(c>0)
 {
  f=f*c;
  c--;
 }
printf("factorial=%d",f);
}
