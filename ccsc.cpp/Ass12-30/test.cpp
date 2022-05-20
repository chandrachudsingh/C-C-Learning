//28.
#include<iostream>
using namespace std;
#include<iomanip>

class test
{
 private:
 int tc,cr,c,a;
 char dis[30];
 
 public:
 int calcenter()
 {
  a=c%50;
  if(a>0)
  cr=(c/50)+1;
  else
  cr=c/50;
  
  return cr;
 }
 void schedule()
 {
  cout<<"Enter testcode";
  cin>>tc;
  cout<<"Enter description";
  cin>>dis;
  cout<<"Enter no. of candidates";
  cin>>c;
 }
 void displaytest()
 {
  cout<<"1. Difference between c and c++?"<<endl<<"2. What are the major differences between Object Oriented and Procedural programming approaches?"<<endl<<"3. What are the basic concepts of OOP?"<<endl<<"4. Difference between object oriented and object based?";
 }
};
main()
{
 int t;
 test s;
 s.schedule();
 t=s.calcenter();
 s.displaytest();
}
