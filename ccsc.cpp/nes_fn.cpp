//nested member function
#include<iostream>
using namespace std;

class emp
{
 int id;
 float sal;
 
 void bonus(int a)
 {
  cout<<"bonus="<<sal*a/100;
 }
 public:
 void getdata()
 {
  cout<<"Enter emp id";
  cin>>id;
  cout<<"\nEnter salary";
  cin>>sal;
 }
 void display()
 {
  cout<<"\nid="<<id;
  cout<<"\nsalary="<<sal;
 }
 void cal()
 {
  if(sal>25000)
  bonus(10);
  else
  bonus(5);
 }
};
main()
{
 emp e;
 e.getdata();
 e.display();
 e.cal();
}
