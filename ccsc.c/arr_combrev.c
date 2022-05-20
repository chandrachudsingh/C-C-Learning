//merge two arrays in third array(reverse)
#include<stdio.h>
void main()
{
 int x,y,i,j;

 printf("enter the size of both the arrays");
 scanf("%d%d",&x,&y);

 int a[x],b[y],c[x+y];
 
 for(i=0;i<x;i++)
 {
  printf("enter 1st array value");
  scanf("%d",&a[i]);
 }
 for(i=0;i<y;i++)
 {
  printf("enter 2nd array value");
  scanf("%d",&b[i]);
 }
  j=y-1;
 for(i=0;i<x+y;i++)
 {
  if(i<x)
  {
  c[i]=a[i];
  }
  else
  {
   c[i]=b[j];
   j--;
  }
    printf("\narray value c[%d]=%d",i,c[i]);
 }
}
