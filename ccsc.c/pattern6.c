/*pattern 1
                 12
                 123
                 1234 */
#include<stdio.h>
void main()
{
 int i,j=1;
 
 do
 {
  i=1;
  do
  {
   printf("%d",i);
   i++;
  }
  while(i<=j);
      
  printf("\n");
  j++;
 }
 while(j<=4);
}   
