//sum using array
#include<stdio.h>
void main()
{
 int s=0,a[5],i;

 for(i=0;i<5;i++)
 {
  printf("\nenter array values");
  scanf("%d",&a[i]);
 }
 for(i=0;i<5;i++)
 {
  s=s+a[i];
  printf("\narray value at %d index=%d",i,a[i]);
 }
}
