#include<stdio.h>
void fun(int,int);
void main()
{
 int a,b;
 printf("enter two numbers");
 scanf("%d%d",&a,&b);
 fun(a,b);
}
void fun(int x,int y)
{
 int i,n,max,min;
 printf("for  lcm pres 1 and pres 2 for hcf");
 scanf("%d",&n);
 if(n==1)
 {
  max=(x>y)?x:y;
  while(1)
  {
   if(max%x==0&&max%y==0)
   {
    printf("lcm of %d&%d=%d",x,y,max);
    break;
   } max++;
  } 
 }
  if(n==2)
  {
   min=(x<y)?x:y;
   for(i=min;i>1;i--)
   {
    if(x%i==0&&y%i==0)
    {printf("hcf of %d&%d=%d",x,y,i);
    break;
    }
   }
  }
}
