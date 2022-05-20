//take two aray and sum each orresponding element in third array
#include<stdio.h>
void main()
{
 int n,i;
 
 printf("enter array size");
 scanf("%d",&n);

 int a[n],b[n],c[n];

 for(i=0;i<n;i++)
 {
 printf("enter array value");
 scanf("%d%d",&a[i],&b[i]);
 
 c[i]=a[i]+b[i];
 }
for(i=0;i<n;i++)
{
 printf("\nsum of array values c[%d]=%d",i,c[i]);
}
}
