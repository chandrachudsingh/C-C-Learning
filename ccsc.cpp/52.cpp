//52.
#include<iostream>
using namespace std;

class complex
{
 public:
 int i1,r1,i2,r2,i,r;

 complex(int r1,int i1,int r2,int i2)
 {
  this->r1=r1;
  this->i1=i1;
  this->r2=r2;
  this->i2=i2;
 }
 complex operator +(complex& s1)
 {
  complex z;
  z.r=s1.r1+r2;
  z.i=s1.i1+i2;
  return z;
 }
 complex operator -(complex &s1)
 {
  complex y;
  y.r=s1.r1+r2;
  y.i=s1.i1+i2;
  return y;
 }
};
main()
{
 int a,b,c,d;
 
 cout<<"1.Enter real and imaginary part\n";
 cin>>a>>b;
 cout<<"2.Enter real and imaginary part\n";
 cin>>c>>d;

 complex k=complex s1(a,b,c,d);
 complex l=complex s2(a,b,c,d);

 cout<<"Sum="<<k.r<<"+"<<k.i<<"i";
 cout<<"sub="<<l.r<<"-"<<l.i<<"i";
}
