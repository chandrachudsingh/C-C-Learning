// 16. arithmatic operations
#include<iostream>
using namespace std;

class arth
{
 public:
 int a,b,s;
 
 public:
 void showchoice()
 {
  cout<<"Enter two numbers"<<endl;
 cin>>a>>b;
 }
  void add(){
  s=a+b;
  cout<<"sum="<<s;
  }
  
  void sub(){
  s=a-b;
  cout<<"sum="<<s;
  }
  
  void mul(){
  s=a*b;
  cout<<"sum="<<s;
  }
   
  void div(){
  s=a/b;
  cout<<"sum="<<s;
  }
};
main()
{ 
 int n;
 
 arth i;
 i.showchoice();
 
   cout<<"Enter choice=>1.addition, 2. subtract, 3.multiply, 4.divide\n";
  cin>>n;
 
 if(n==1){
 i.add();}
 
 else if(n==2){
 i.sub();}
  
 else if(n==3){
 i.mul();}
 
 else if(n==4){
 i.div();}
  
 else
 {cout<<"please enter a correct choice";
 } 
}
