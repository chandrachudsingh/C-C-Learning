//40.
#include<iostream>
using namespace std;

class plot
{
  public:
 int l,b,ar;
 plot(int l,int b)
{
 this->l=l;
 this->b=b;
}
float calarea()
{
 ar=l*b;
 cout<<"Area="<<ar<<endl;
 return ar;
}
float compare(plot x)
{ 
  if(x.ar==ar)
  return 0;
  else if(ar>x.ar)
  return 1;
  else
  return -1;
}
};
main()
{
 int m,n,c,d;
 int z;
 cout<<"Enter two numbers\n";
 cin>>m>>n;

 plot p(m,n);
 p.calarea();
 
 cout<<"Enter two numbers\n";
 cin>>c>>d;

 plot k(c,d);
 k.calarea();
 z=k.compare(p);
 switch(z)
 {
  case -1:
  cout<<"First area is greater than second";
  break;
  case 0:
  cout<<"Both areas are equal";
  break;
  default:
  cout<<"second area is greater than first";
 }
}
