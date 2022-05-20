//salary
#include<stdio.h>
void main()
{
  float basic,pf,ta,da,ns,gs;
  printf("enter basic salary");
  scanf("%f",&basic);
  
  ta=0.1*basic;
  da=500;
  pf=0.078*basic;
  
  gs=basic+da+ta;
  ns=gs-pf;
  printf("gross salary=%f, Net salary=%f",gs,ns);
}  
