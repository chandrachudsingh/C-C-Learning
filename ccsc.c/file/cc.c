//copy from one file to another
#include<stdio.h>
void main()
{
 FILE*fp;
 FILE*ptr;
 
 char c[50];
 int i=0;
 
 fp=fopen("ss.txt","r");
 ptr=fopen("copy.txt","w");
 
 while(1)
 {
  c[i]=fgetc(fp);
  if(feof(fp))
  {
   break;
  }
 fputc(c[i],ptr);
 i++;
 }
 fclose(fp);
 fclose(ptr);
 
 puts(c);
}
