//62.
#include<iostream>
using namespace std;

class faculty
{
 public:
 string fn,d;
 float sal;
 
 void getdata()
 {
  cout<<"Enter faculty name";
  cin>>fn;
  cout<<"Enter department name";
  cin>>d;
 }
};
class ftfaculty:public faculty
{
 public:
 float b,a;
 
 void getdata()
 {
  faculty::getdata();
  cout<<"Enter basic";
  cin>>b;
  cout<<"Enter allowance";
  cin>>a;
 }
 void display()
 {
  cout<<"faculty name="<<fn<<endl;
  cout<<"department name="<<d<<endl;
  sal=b+a;
  cout<<"Salary="<<sal<<endl;
 }
};
class ptfaculty:public faculty
{
 public:
 float h,r;
 
 void getdata()
 {
  faculty::getdata();
  cout<<"Enter hours";
  cin>>h;
  cout<<"Enter rate";
  cin>>r;
 }
 void display()
 {
  cout<<"faculty name="<<fn<<endl;
  cout<<"department name="<<d<<endl;
  sal=h*r;
  cout<<"Salary="<<sal<<endl;
 }
};
main()
{
 ftfaculty a;
 ptfaculty b;
 a.getdata();
 a.display();
 b.getdata();
 b.display();
}
