//linear search
#include<stdio.h>
void main()
{
 int a[10],s,i,flag=0;
 
 for(i=0;i<10;i++)
 {
  printf("enter array element");
  scanf("%d",&a[i]);
 }
printf("enter element to search");
scanf("%d",&s);

for(i=0;i<10;i++)
{
 if(a[i]==s)
 {
  flag=1;
  printf("number found");
  break;
 }
if(flag==0)
{
 printf("sorry number not found");
}
}
}
