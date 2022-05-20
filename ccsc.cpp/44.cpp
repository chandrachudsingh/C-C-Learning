//44.including return object using this
#include<iostream>
using namespace std;

class box
{
 public:
 int l,b,h,v;
 
 box(int l,int b,int h)
 {
  this->l=l;
  this->b=b;
  this->h=h;
  
 }
 int cal()
 {
  v=l*b*h;
  cout<<"Volume="<<v<<endl;
  return v;
 }
 box comp(box x)
 {
  if(x.v>v)
  return x;
 }
};
main()
{
 int m,n,k;
 box s(10,20,30);
 s.cal();
 cout<<"Enter l,b,h\n";
 cin>>m>>n>>k;
 
 box s1(m,n,k);
 s1.cal();
 box b= s1.comp(s);
 
 if(b.v>0)
 cout<<"Max volume is="<<b.v;
 else
 cout<<"Max volume is="<<s1.v;
}
