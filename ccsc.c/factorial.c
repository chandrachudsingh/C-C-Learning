//factorial
#include<stdio.h>
#include<math.h>
void main()
{ 
  int n,f=1;
  
  printf("enter a number");
  scanf("%d",&n);
  
  while(n>0)
  {
    f=f*n;
    n--;
  }
  printf("factorial=%d",f);
}  
