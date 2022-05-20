//65.
#include<iostream>
using namespace std;

class emp
{
 protected:
 string n;
 float pr;
 
 public:
 void getname()
 {
  cout<<"Enter name";
  cin>>n;
 }
 float getpay()
 {
  cout<<"Enter payrate";
  cin>>pr;
  return pr;
 }
};
class mgr:public emp
{
 public:
 int is_salaried;
 
 mgr(){}
 int is_salarised()
 {
  is_salaried=(pr>0)?1:0;
  return is_salaried;
 }
 void showdetails()
 {
  cout<<"Name="<<n<<endl;
  cout<<"Payrate="<<pr<<endl;
  if(is_salaried!=0)
  cout<<"Salaried"<<endl;
  else
  cout<<"Not salaried"<<endl;
 }
};
main()
{
mgr b;
b.getname();
b.getpay();
b.is_salarised();
b.showdetails();
}
