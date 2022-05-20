//accept date and time and claulate time difference
#include<stdio.h>
struct time
{
 int h,m,s;
}a;
struct data
{
 int d;
 struct time a;
}e[1];

void fn(struct data *e[]);
void main()
{
 int i;
 
 for(i=0;i<2;i++)
 {
  printf("enter date %d",i+1);
  scanf("%d",&e[i].d);
  printf("enter time %d as hour,month,second",i+1);
  scanf("%d%d%d",&e[i].a.h,&e[i].a.m,&e[i].a.s);
 }
 fn(&e);
}
void fn(struct data *e[])
{
 float dh,dm,ds,c,td;
 
 if(e[1]->d>=e[0]->d)
 c=((e[1]->d-e[0]->d-1)*24)*60;
 else
 c=((e[0]->d-e[1]->d-1)*24)*60;
 
 dh=(24-e[0]->a ->h)+e[1]->a->h;
 dm=(60-e[0]->a->m)+e[1]->a->m;
 ds=(60-e[0]->a->s)+e[1]->a->s;
 
 if(dm<0)
 {
  dh-=1;
  if(ds<0)
  {dm=60+dm-1;ds=60+ds;}
  
  else if(ds>=60)
  {dm=60+dm+1;ds=ds-60;}
 }
 else if(dm>=60)
 {
  dh+=1;
  if(ds<0)
  {dm=dm-1;ds=60+ds;}
  
  else if(ds>=60)
  {dm=dm+1;ds=ds-60;}
 }   
 else if(dm==0)
 {
  if(ds<0)
  {dh-=1;dm=59;ds=60+ds;}
  
  else if(ds>=60)
  {dm=1;ds=ds-60;}
 }
 else
 {
  if(ds<0)
  {dm=59;ds=60+ds;}
  
  else if(ds>=60)
  {dh+=1;dm=1;ds=ds-60;}
 }
   
 td=c+(dh*60)+dm+(ds/60);
 
 printf("time difference=%f",td);
}
