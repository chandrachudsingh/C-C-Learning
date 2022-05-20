//program for largest among 5 no.
#include<stdio.h>
void main()
{
int a,b,c,d,e,l=0;
printf("enter 5 number");
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);

if(a>l)
l=a;
else if(b>l)
l=b;
else if(c>l)
l=c;
else if(d>l)
l=d;
else if(e>l)
l=e;

printf("largest no. is %d",l);
}

