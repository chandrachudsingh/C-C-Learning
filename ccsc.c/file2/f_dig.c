//file handling- digit non digit
#include<stdio.h>
void main()
{
 FILE *fp;
 FILE *ptr;
 FILE *fptr;

 char c[50],a[50],b[50];
 int i=0,j=0,k=0,n=0;

 fp=fopen("texts.txt","r");
 ptr=fopen("DIG.txt","w");     
 fptr=fopen("NONDIG.txt","w");

 while(1)
 {
  c[i]=fgetc(fp);
   if(c[i]=='\n')
  {n++;}
  if(c[i]>=48&&c[i]<=57)
  { 
   a[j]=c[i];
   fputc(a[j],ptr);
   j++;
  }
  else if((c[i]>=65&&c[i]<=90)||(c[i]>=97&&c[i]<=122))
  {
   b[k]=c[i];
   fputc(a[k],fptr);
   k++;
  }
  i++;
 }
 printf("no of lines=%d",n);  

 fclose(fp);
 fclose(ptr);
 fclose(fptr);
}
