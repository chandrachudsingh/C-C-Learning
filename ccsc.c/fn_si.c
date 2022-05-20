//simple interest using function 4th type
#include<stdio.h>
float cal();
void main()
{
 float si;
 si=cal();
 printf("SI=%f",si);
}
float cal()
{
 float p,t,r,i;
 
 printf("enter principle,time,rate");
 scanf("%f%f%f",&p,&t,&r);
 i=(p*r*t)/100;
 
 return i;
}
