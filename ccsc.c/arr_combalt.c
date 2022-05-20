//addind two arrays in third alternate
#include<stdio.h>
void main()
{
 int n,i,j=0;
 
 printf("enter array size");
 scanf("%d",&n);
 
 int a[n],b[n],c[2*n];
 
 for(i=0;i<n;i++)
 {
   printf("enter 1st array value");
   scanf("%d",&a[i]);
  }
 for(i=0;i<n;i++)
 {
   printf("enter 2nd array value");
   scanf("%d",&b[i]);
  } 
  for(i=0;i<(2*n);i+=2)
  {
    c[i]=a[j];
    c[i+1]=b[j];
    j++;
   }
  for(i=0;i<(2*n);i++)
 {
   printf("c[%d]=%d\n",i,c[i]);
  }
}
