//51.
#include<iostream>
using namespace std;

class order
{
 public:
 int oid,qty;
 string n;
 
 order()
 { 
  cout<<"Enter oid";
  cin>>oid;
  cout<<"Enter quantity";
  cin>>qty;
  cout<<"Enter name";
  cin>>n;
 }
 void operator ++()
 {
  qty+=1;
  cout<<"Quantity="<<qty;
 }
 void operator --()
 {
  qty-=1;
  cout<<"Quantity="<<qty;
 }
};
main()
{
 order s;
 int i;
 cout<<"Press 1 for increament/press 2 for decreament";
 cin>>i;
 
 switch(i)
 {
  case 1:
  ++s;
  break;
  case 2:
  --s;
  break;
  default:
  cout<<"Please select correct option";
 }
}
