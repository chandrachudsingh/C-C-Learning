//static classes
#include<stdio.h>
#include<stdlib.h>
void main()
{
 static int a;
 a++;

 if(a==5)
 {
  exit(1);
 }
 else
 printf("in main");
}
