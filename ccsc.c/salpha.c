//structure- print in Alphabetical order
#include<stdio.h>
#include<string.h>

struct product
{
 char id[10],n[20];
 int q;
 float p;
}s[5];

void main()
{
 int i,j;
 
 struct product t;
 
 for(i=0;i<6;i++)
 {
   printf("%d enter pid ",i+1);
  scanf("%s",s[i].id);
     printf("%d enter name ",i+1);
  scanf("%s",s[i].n);
     printf("%d enter quantity ",i+1);
  scanf("%d",&s[i].q);
     printf("%d enter price ",i+1);
  scanf("%f",&s[i].p);
 } 
 for(i=0;i<6;i++)
 {
  for(j=i+1;j<6;j++)
  {
   if(strcmp(s[i].n,s[j].n)>0)
   {
    t=s[i];
    s[i]=s[j];
    s[j]=t;
   }
  }
 }
 printf("pid\tname\tquantity\tprice\n");
 
 for(i=0;i<6;i++)
 {
  printf("%s\t%s\t%d\t%f\n",s[i].id,s[i].n,s[i].q,s[i].p);
 }
}
