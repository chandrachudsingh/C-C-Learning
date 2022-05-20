//structure 
#include<stdio.h>
void main()
{
 float tsal;
 struct emp
 {
 int eno;
 char n[20];
 float sal;
 };
 struct emp e={102,"arvind",3500};
 
 printf("\neno=%d",e.eno);
 printf("\nname=%s",e.n); 
 printf("\nsalary=%f",e.sal);

 struct emp e1;

 printf("\nenter no.");
 scanf("%d",&e1.eno);
 printf("\nenter ename");
 scanf("%s",&e1.n);
 printf("\nenter salary");
 scanf("%f",&e1.sal);

 printf("\neno=%d",e1.eno);
 printf("\nename=%s",e1.n);
 printf("\nsalary=%f",e1.sal);

 if(e.sal>e1.sal)
 printf("\n%s has more salary",e.n);
 else
 printf("\n%s has more salary",e1.n);
}
