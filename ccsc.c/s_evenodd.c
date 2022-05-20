//switch evenodd
#include<stdio.h>
void main()
{
  int a;
  printf("enter a number");
  scanf("%d",&a);
  
  if(a>0)
  {
   switch(a%2)
   {
    case 0:
           printf("even\n");
           break;
    default:
            printf("odd\n");
   }
  } 
   else
   printf("neither even nor odd\n");
}              
