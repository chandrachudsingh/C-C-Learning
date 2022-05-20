/*pattern *
                 ***
                 *****
                 *******  */
#include<stdio.h>
void main()
{
 int i,j=1;
 
 do
 {
  i=0;
  do
  {
   printf("*");
   i++;
  }
  while(i<j);
      
  printf("\n");
  j+=2;
 }
 while(j<8);
}                 
