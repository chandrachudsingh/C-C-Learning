//program to accept a number between 1 to 12 & print its respective month
#include<stdio.h>
void main()
{ int m;
printf("enter a no. btw 1 to 12");
scanf("%d",&m);
 
switch(m)
{case 1:
        printf("January");
        break;
case 2:
        printf("Febraury");
        break;
case 3:
        printf("March");
        break;
case 4:
        printf("April");
        break;
case 5:
        printf("May");
        break;
case 6:
        printf("June");
        break;
case 7:
        printf("July");
        break;
case 8:
        printf("August");
        break;
case 9:
        printf("September");
        break;
case 10:
        printf("October");
        break;
case 11:
        printf("November");
        break;
case 12:
        printf("December");
        break;
default:
        printf("enter no below 12");
}
}
