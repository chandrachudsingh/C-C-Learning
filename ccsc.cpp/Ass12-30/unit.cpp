//unit conversion
#include<iostream>
using namespace std;

class unit
{
 public:
 float km,cm,m,in,f;
 
 public:
 void choice()
 {
  cout<<"conversion to meters=> 1.km,2.cm,3.inch,4.feet";
 }
 void k()
 {
  cout<<"Enter km value";
  cin>>km;
  m=km*1000;
  cout<<"value in meters="<<m;
 }
 void c()
 {
  cout<<"Enter cm value";
  cin>>cm;
  m=cm/100;
  cout<<"value in meters="<<m;
 }
 void i()
 {
  cout<<"Enter inch value";
  cin>>in;
  m=in*0.0254;
  cout<<"value in meters="<<m;
 }
 void feet()
 {
  cout<<"Enter feet value";
  cin>>f;
  m=f*0.3048;
  cout<<"value in meters="<<m;
 }
};
main()
{
 int n;
 unit s;
 s.choice();
 cin>>n;
 switch(n)
 {
  case 1:
  s.k();
  break;

  case 2:
  s.c();
  break;

  case 3:
  s.i();
  break;

  case 4:
  s.feet();
  break;

 default:
  cout<<"enter the right choice";
  break;
 }
}
