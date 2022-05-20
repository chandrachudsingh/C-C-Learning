//39.
#include<iostream>
using namespace std;

class cal
{
 int n1,n2,a;
 
 public:
 cal(int n1,int n2)
{
 this->n1=n1;
 this->n2=n2;
}
void sum()
{
 a=n1+n2;
 cout<<"sum="<<a;
}
};
main()
{
 int a,b;
 
 cout<<"Enter two numbers";
 cin>>a>>b;

 cal s(a,b);
 s.sum();
}
