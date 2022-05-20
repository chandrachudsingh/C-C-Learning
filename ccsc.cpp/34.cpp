//34.Employee
#include<iostream>
using namespace std;

class emp
{
 public:
 int empid;
 float sal,tax;
 
 void calctax(emp x)
 {
   tax=sal*0.125;
   cout<<"tax for empid "<< empid<<"="<<tax<<endl;
 }
 int max(emp a,emp b)
 {
  if(a.sal>b.sal)
   return a.empid;
  else if(b.sal>a.sal)
   return b.empid;
 }
};
main()
{
 float p;
 emp s,i,j;
 
 cout<<"1.Enter empid and salary\n";
 cin>>s.empid>>s.sal;
 cout<<"2.Enter empid and salary\n";
 cin>>i.empid>>i.sal;
 
 s.calctax(s);
 i.calctax(i);
 p=j.max(s,i);
 cout<<p<<" has higher salary";
}
