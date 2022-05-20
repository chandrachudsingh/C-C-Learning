//convert uppercase to lowercase and vice-versa
#include<stdio.h>
void main()
{
  char a;
  printf("enter a character");
  scanf("%c",&a);
  
  if(a>='A'&&a<='Z')
  {
    printf("the lower case of the charater is =%c",a+32);
  }
  else if(a>='a'&&a<='z')
  {
    printf("the upper case of the charater is =%c",a-32);
  } 
  else
  printf("it's not a character value");
}
