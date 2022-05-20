#include<stdio.h>
void main()
{ 
int a=10,b=17,c;
c=(++a)*(--b)-(a++/--a);
printf("%d",c);
}
