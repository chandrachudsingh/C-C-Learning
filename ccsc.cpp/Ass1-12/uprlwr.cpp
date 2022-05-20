//Accept a string and convert in lower/upper case
#include<iostream>
#include<string.h>
using namespace std;
main()
{
 char c[20];
 int i=0,a;

 cout<<"Enter a string";
 cin>>c;
 cout<<"press 1 for uppercase and 2 for lowercase";
 cin>>a;

 if(a==1)
 {
  while(c[i]!='\0')
  {
    if(c[i]>96&&c[i]<123)
    {c[i]=c[i]-32;}
    i++;
  }
 }
  else if(a==2)
  {
  while(c[i]!='\0')
   {
    if(c[i]>64&&c[i]<91)   
    {c[i]=c[i]+32;}
    i++;
  }
 }
   cout<<"processed string="<<c;
}
