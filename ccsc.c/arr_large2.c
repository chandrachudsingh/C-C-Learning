//aray with pointer
#include<stdio.h>
void main()
{
 int a[10],i,l1,l2;

 for(i=0;i<10;i++)
 {
  printf("enter array element");
  scanf("%d",&a[i]);
 }
 if(a[0]>a[1])
 {
  l1=a[0];
  l2=a[1];
 }
 else
 {
  l1=a[1];
  l2=a[0];
 }
 for(i=2;i<10;i++)
 {
  if(a[i]>l1)
  {
   l2=l1;
   l1=a[i];
  }
  else if(a[i]>l2)
  l2=a[i];
 }
printf("largest=%d, second largest=%d",l1,l2);
}
