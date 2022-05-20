//simple interest using rate as argument
#include<iostream>
using namespace std;

class simple
{
 public:
 int p,r,t;
 float si;
 void getdata()
 {
  cout<<"Enter amount";
  cin>>p;
  cout<<"Enter time";
  cin>>t;
  }
  inline void cal(int r)
 {
  si=(p*r*t)/100;
  cout<<"Simple interest="<<si;
 }
};
int main()
 {
  simple i;
  i.getdata();
  i.cal(3);
 }
