/*pater using function
5 4 3 2 1
4 3 2 1
3 2 1
2 1
1         */
#include<stdio.h>
void pat(int);
void main()
{
 int r=5,n;
 pat(r);
}
void pat(int n)
{
 int j,k=5,i;
 
 for(i=0;i<n;i++)
 {
  for(j=k;j>0;j--)
  printf("%d",j);

  k--;
  printf("\n");
 }
}
