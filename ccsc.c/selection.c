//selection sort
#include<stdio.h>
void main()
{
 int a[10],i,j,temp; 

 for(i=0;i<10;i++)
 {
  printf("enter array elements");
  scanf("%d",&a[i]);
 }
 for(i=0;i<10;i++)
 {
  for(j=i+1;j<10;j++)
  {
   if(a[i]>a[j])
   {
    temp=a[j];
    a[j]=a[i];
    a[i]=temp;
   }
  } 
 }
printf("sorted array elements are");

for(i=0;i<10;i++)
{ 
 printf("\n%d",a[i]);
}
}
