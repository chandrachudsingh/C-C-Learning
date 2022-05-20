//largest of n numbers 
#include<stdio.h>
void main()
{
 int n,i,max=0;

 printf("enter array size");
 scanf("%d",&n);

 int a[n];

 for(i=0;i<n;i++)
 {
 printf("enter array value");
 scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
  if(a[i]>max)
  max=a[i];
 }
printf("largest no.=%d",max);
}
