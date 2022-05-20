#include<stdio.h> 
void main()
{
 int i;

 structstudent
 { int r;
    char n[25],c[15],g;
    float p;
 }s[4];
 for(i=0;i<5;i++)
 {
  printf("enter rollno.,name,course,grade,percentage");
  scanf("%d%s%s%c%f",&s[i].r,&s[i].n,&s[i].c,&s[i].g,&s[i].p);
 }
 printf("rollno.\tname\tcourse\tgrade\tpercentage");
 for(i=0;i<5;i++)
 {
  printf("%d\t%s\t%s\t%c\t%f",s[i].r,s[i].n,s[i].c,s[i].g,s[i].p);
 }
}
