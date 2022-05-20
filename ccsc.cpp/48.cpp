//48.
#include<iostream>
using namespace std;

class swapping
{
 private:
 int a,b,c;
 public:
 swapping(int a,int b)
 {
  this->a=a;
  this->b=b;
 }
 friend void cal(swapping s);
};
void cal(swapping s)
 {
  s.c=s.a;
  s.a=s.b;
  s.b=s.c;
 cout<<"Value of a="<<s.a<<endl<<"Value of b="<<s.b;
 }
int main()
{
	int m,n;
	
	cout<<"Enter two numbers"<<endl;
	cin>>m>>n;
    swapping x(m,n);
    cal(x);
    return 0;
}
