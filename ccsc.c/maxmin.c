//program to find max and min value
#include<stdio.h>
void main()
{
  int n,x,i,y,max=0,min;
  printf("enter the number of terms");
  scanf("%d",&n);
  printf("enter a number");
  scanf("%d",&x);
  
  min=x;
  y=x;
  
  for(i=1;i<n;i++)
  {
    printf("enter a number");
    scanf("%d",&x);
    
    if(x>max)
    max=x;
    
    if(x<min)
    min=x;
    }
  if(y>max)
  max=y;
  printf("max=%d,min=%d",max,min);
}
