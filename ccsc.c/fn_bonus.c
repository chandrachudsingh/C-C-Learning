//bonus using function
#include<stdio.h>
float bonus(float);
void main()
{
 float eno,bsal,b;
 
 printf("enter eno,bsal");
 scanf("%f%f",&eno,&bsal);

 b=bonus(bsal);

 printf("bonus=%f",b);
}
float bonus(float s)
{
 float a;

 if(s>25000)
 a=(s*10)/100;
 else
 a=(s*5)/100;

 return a;
}
