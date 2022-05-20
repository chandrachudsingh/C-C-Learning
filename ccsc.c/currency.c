//currency notes
#include<stdio.h>
void main()
{
int n,a,b,c,d,e,f,g,h,i;
printf("enter money");
scanf("%d",&n);

  a=n/1000;
  n=n%1000;
  b=n/500;
  n=n%500;
  c=n/100;
  n=n%100;
  d=n/50;
  n=n%50;
  e=n/20;
  n=n%20;
  f=n/10;
  n=n%10;
  g=n/5;
  n=n%5;
  h=n/2;
  n=n%2;
  i=n/1;
  n=n%1;
  
printf("notes of 1000=%d,500=%d,100=%d,50=%d,20=%d,10=%d,5=%d,2=%d,1=%d\n",a,b,c,d,e,f,g,h,i);
}
