//LCM
#include<stdio.h>
void main()
{
 int a,b,max;
 printf("enter two numbers");
 scanf("%d%d",&a,&b);
 
 max=(a>b)?a:b;
 
 while(1)
 {
  if(max%a==0&&max%b==0)
  {
   printf("LCm of %d & %d=%d",a,b,max);
   break;
  }
  max++;
 }
}  
