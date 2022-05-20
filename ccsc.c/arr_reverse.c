
3//for reversing the no.s in array
#include<stdio.h>
void main()
{
 int j,n,i,k;

 printf("enter array size");
 scanf("%d",&n);

 int a[n];

 for(i=0;i<n;i++)
 {
 printf("enter array value");
 scanf("%d",&a[i]);
 }
 for(i=0;i<n/2;i++)
 {
  j=n-i-1;
  k=a[i];
  a[i]=a[j];
  a[j]=k;
 }
 printf("array values=");
 for(i=0;i<n;i++)
 {
  printf("%d,",a[i]);
 }
}
