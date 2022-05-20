//factors of a number
#include<stdio.h>
void main()
{
 int n,i;
 
 printf("enter a number");
 scanf("%d",&n);
 
 printf("factors of %d=1,",n);
  
 for(i=2;i<=n/2;i++)
 {
  if(n%2==0)
  printf("%d,",i);
 }
}  
