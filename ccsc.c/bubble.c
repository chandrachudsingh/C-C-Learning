//bubble sort
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
  for(j=0;j<9;j++)
  {
   if(a[j]>a[j+1])
   {
    temp=a[j+1];
    a[j+1]=a[j];
    a[j]=temp;
   }
  }
 }
printf("sorted array elements are");

for(i=0;i<10;i++)
{ 
 printf("%d,\t",a[i]);
}
}
