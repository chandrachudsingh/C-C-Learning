/*pattern *
                    **
                    ***
                    ****
                    ***
                    **
                    *          */
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
  j++;
 }
 while(j<=4);
  j=1;
 do
 {
  i=3;
  do
  {
   printf("*");
   i--;
  }
  while(i>=j);
      
  printf("\n");
  j++;
 }
 while(j<4);
}
