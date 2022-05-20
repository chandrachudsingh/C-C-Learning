//43.
#include<iostream>
using namespace std;

class TCS
{
  public:
 char n[20];
 int eid;
 float sal;
 static string c;
 
 TCS()
{
 cout<<"Enter data\n";
 getdata();
}
void getdata()
{
 cout<<"Enter name";
 cin>>n;
 cout<<"Enter eid";
 cin>>eid;
 cout<<"Enter salary";
 cin>>sal; 
}
static void disp()
{
 cout<<"Company name="<<c<<endl;
}
void display()
{
 cout<<"emp name="<<n<<endl;
 cout<<"empid="<<eid<<endl;
 cout<<"Salary="<<sal<<endl;
 }
};
string TCS::c="TCS company";
main()
{
 TCS s;
 s.disp();
 s.display();
}
