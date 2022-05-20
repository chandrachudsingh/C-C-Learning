//29.Bank details
#include<iostream>
using namespace std;

class account
{
 private:
 int accno;
 char n[25];
 float b,b1;
 
 public:
 void getdata()
 {
  cout<<"Enter accno";
  cin>>accno;
  cout<<"Enter name";
  cin>>n;
  cout<<"Enter balance";
  cin>>b;
 }
 void deposit()
 {
  cout<<"Enter deposit amount";
  cin>>b1;
  b=b+b1;
  }
 void withdraw()
 {
  cout<<"Enter withdrawal amount";
  cin>>b1;
  b=b-b1;
  }
  void display()
  {
     cout<<"Accno="<<accno<<endl<<"name="<<n<<endl<<"balance="<<b;
   }
};
main()
{
 int i;
 account x;
 x.getdata();
 cout<<"press 1 for deposit\npress 2 for withdrawal\npress 3 for account details\n";
 cin>>i;
 switch(i)
 {
  case 1:
  x.deposit();
  break;
  case 2:
  x.withdraw();
  break;
  case 3:
  x.display();
  break;
  default:
  cout<<"Please enter a valid no.";
 }
}
