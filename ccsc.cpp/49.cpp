//49.
#include<iostream>
using namespace std;

class X
{
 private:
 int a,b;
 
 public:
 X(int a,int b)
 {
  this->a=a;
  this->b=b;
 }
 friend class Y;
};

class Y
{
 public:
 Y(X obj)
 {
  swap(obj.a,obj.b);
  cout<<"first no.="<<obj.a<<endl<<"second no.="<<obj.b;
 }
};
int main()
{
 int m,n;
 cout<<"Enter two numbers";
 cin>>m>>n;
 
 X k(m,n);
 Y s(k);
 return 0;
}
