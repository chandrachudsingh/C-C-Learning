//fibonacci
#include<stdio.h>
void main()
{
  int a,b,c,n;
  
  printf("enter two number");
  scanf("%d%d",&a,&b);
  printf("length of the series");
  scanf("%d",&n);
  
  printf("\n%d %d",a,b);
  
  while(n>2)
  {
  c=a+b;
  a=b;
  b=c;
  printf(" %d",c);
  n--;
  }
}  
