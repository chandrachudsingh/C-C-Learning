// 27.define class student
#include<iomanip>
#include<iostream>
using namespace std;

class stud
{
 private:
 int admno;
 char sname[20];
 float eng,math,science,total;
 public:
 float ctotal()
 {
  total=eng+math+science;
  return total;
  }
  
 void takedata()
 {
  cout<<"Enter admission no.=";
  cin>>admno;
  cout<<"Enter name=";
  cin>>sname;
  cout<<"Enter english marks=";
  cin>>eng;
  cout<<"Enter maths marks=";
  cin>>math;
  cout<<"Enter science marks=";
  cin>>science;
 }
void showdata()
{
  cout<<"admission no.="<<setw(2)<<admno<<endl;
  cout<<"name="<<setw(10)<<sname<<endl;
  cout<<"english marks="<<setw(7)<<eng<<endl;
  cout<<"maths marks="<<setw(9)<<math<<endl;
  cout<<"science marks="<<setw(7)<<science<<endl;
  }
 };
 main()
 {
  float t;
  stud s;
  s.takedata();
  t=s.ctotal();
  s.showdata();
  cout<<"total marks="<<t;
 }
