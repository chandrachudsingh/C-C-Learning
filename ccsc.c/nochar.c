//accept a string and display no. of characters
#include<stdio.h>
void main()
{
 char n[50];int i=0;

 printf("enter a sentence");
 gets(n);

 while(n[i]!='\0')
 i++;

 printf("no. of characters=%d",i);
}
