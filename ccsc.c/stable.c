#include<stdio.h> 
void main()
{
 int i;

 struct student
 { int r;
    char n[25],c[15];
    //char g;
    int p;
 }s[4];
 for(i=0;i<5;i++)
 {
  printf("enter rollno\n");
  scanf("%d",&s[i].r);
  printf("enter name\n");
  scanf("%s",s[i].n);
  printf("enter course\n");
  scanf("%s",s[i].c);
 // printf("enter grade\n");
 //scanf("%c",&s[i].g); 
//getchar();
  printf("enter percentage\n");
  scanf("%d",&s[i].p);
 }
 printf("rollno.\tname\tcourse\t\tpercentage\n");
 for(i=0;i<5;i++)
 {
  printf("%d\t%s\t%s\t\t%d\n",s[i].r,s[i].n,s[i].c,s[i].p);
 }
}
