//binary search
#include<stdio.h>
void main()
{
 int a[10],s,i,flag=0,l=0,h=9,m=0;
 
 for(i=0;i<10;i++)
 {
  printf("enter array element");
  scanf("%d",&a[i]);
 }
printf("enter element to search");
scanf("%d",&s);

while(l<=h)
{
 m=(l+h)/2;
 if(s==a[m])
 {
  flag=1;
  printf("number found");
  break;
 }

 else if(s>a[m])
 {
  l=m+1;
 }
 else
 {
  h=m-1;
 }
}
 if(flag==0)
 {
 printf("not found");
 }
}
