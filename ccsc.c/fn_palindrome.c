//palindrome using function
#include<stdio.h>
int rev(int);
void main()
{
 int r,n;

 printf("enter a number");
 scanf("%d",&n);
 
 r=rev(n);

 if(n==r)
 printf("palindrome");
 else
 printf("not palindrome");
}
int rev(int x)
{
 int a,s=0;

 while(x>0)
 {
  a=x%10;
  x=x/10;
  s=(s*10)+a;
 }
return s;
}
