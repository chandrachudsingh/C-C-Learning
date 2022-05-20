//addition of two matrix
#include<stdio.h>
void main()
{
  int i,j,n,k;
  
  printf("enter no. of rows and column");
  scanf("%d%d",&i,&j);
  
  int a[i][j],b[i][j],c[i][j];
  
  n=i;
  k=j;
  
  for(i=0;i<n;i++)
  {
    for(j=0;j<k;j++)
    {
     printf("enter 1st array element");
     scanf("%d",&a[i][j]);
    }
   }
  for(i=0;i<n;i++)
  {
    for(j=0;j<k;j++)
    {
     printf("enter 2nd array element");
     scanf("%d",&b[i][j]);
    }
   }     
  for(i=0;i<n;i++)
  {
    for(j=0;j<k;j++)
    {
     c[i][j]=a[i][j]+b[i][j];
     printf("%d\t",c[i][j]);    
    }
    printf("\n");
  }
}
