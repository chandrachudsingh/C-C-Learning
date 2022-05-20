//array with function
#include<stdio.h>
void fun(int [5]);
void main()
{
 int a[5]={10,20,30,40,50};
 fun(a);
}
void fun(int x[5])
{
 int i;
 
 for(i=0;i<5;i++)
 {
  printf("\n%d",x[i]);
 }
}
