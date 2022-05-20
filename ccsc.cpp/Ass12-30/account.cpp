//30.bank data
#include<iostream>
using namespace std;

class bank
{
 private:
 int accno;
 char n[25];
 float b;
 
 public:
 long int i;
 float t;
 void getdata();
 
 void cal();
}a[5];
void bank::getdata()
{
 for(i=0;i<6;i++)
  {
   cout<<i+1<<".Enter accno";
   cin>>a[i].accno;
   cout<<i+1<<".Enter name";
   cin>>a[i].n;
   cout<<i+1<<".Enter balance";
   cin>>a[i].b;
  }
 } 
 void bank::cal()
 {
  t=0;
  for(i=0;i<6;i++)
  t=t+a[i].b;
  
  cout<<"total money deposited="<<t;
 }
main()
{
 bank s;
 s.getdata();
 s.cal();
}
