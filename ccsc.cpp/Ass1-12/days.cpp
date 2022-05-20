//Accepts no. of days and display no. of years,months and days in it
#include<iostream>
using namespace std;
main()
{
 int n,y,m,d;

 cout<<"Enter no. of days";
 cin>>n;

 y=n/365;
 n=n%365;

 m=n/12;
 n=n%12;

 d=n%12;

 cout<<"\nyears="<<y<<"\nmonths="<<m<<"\ndays="<<d;
}
