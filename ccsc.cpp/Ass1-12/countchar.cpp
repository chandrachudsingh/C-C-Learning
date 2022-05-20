//count no. of words in a string
#include<iostream>
using namespace std;
main()
{
 char c[20];
 int n=0,i=0;

 cout<<"Enter a string\n";
 cin>>c;
 
 while(c[i]!='\0')
 {
  n++;
  i++;
 }
cout<<"No. of characters="<<n;
}
