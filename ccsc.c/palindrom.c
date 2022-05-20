#include <stdio.h>
void main()
{
 int n,f,l,r;
  printf("enter a number");
scanf ("%d",&n);
f=n/10;
l=n%10;
r=l*10+f;
if(n==r)
{
printf ("no is a palindrom");
}
else
{
printf("no is not a palindrom");
}
}

