/*pattern 123
                 456
                 789 */
#include<stdio.h>
void main()
{
 int i=1,k=1,j=3;
 
 do
 {
  do
  {
   printf("%d",i);
   i++;
  }
  while(i<=j);
      
  printf("\n");
  k++;
  j=3*k;
 }
 while(j<=9);
}                    
