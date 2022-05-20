/*pattern A
                 AB
                 ABC
                 ABCD
                 ABCDE  */
#include<stdio.h>
void main()
{
 int i,j=65;
 
 do
 {
  i=65;
  do
  {
   printf("%c",i);
   i++;
  }
  while(i<=j);
      
  printf("\n");
  j++;
 }
 while(j<=69);
}   
