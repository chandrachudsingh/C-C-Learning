/*pattern ABCDDCBA
                      ABCCBA
                        ABBA
                          AA             */
#include<stdio.h>
void main()
{
 int i,j,x,k,l=68;

 for(i=0;i<4;i++)
 {
  for(x=68;x>l;x--)
  printf(" ");

  for(j=65;j<=l;j++)
  printf("%c",j);

  for(k=l;k>=65;k--)
  printf("%c",k);

  printf("\n");

  l--;
 }
}
  
