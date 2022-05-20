//to calculate simple interest 
#include<iostream>
using namespace std;
main()
{
 float p,r,t,si;

 cout<<"Enter principle,rate,time\n";
 cin>>p>>r>>t;
 
 si=(p*r*t)/100;
 cout<<"simple interest="<<si;
}
