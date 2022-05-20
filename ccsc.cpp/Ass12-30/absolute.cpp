//Absolute value
#include<iostream>
using namespace std;

class abs
{
 public:
 void value(float n)
 {
   if(n<0)
   n=n*(-1);
   cout<<"absolute value ="<<n;
 }
 void value(int n)
 {
   if(n<0)
   n=n*(-1);
   cout<<"absolute value ="<<n;
 } 
};
main()
{
 abs s;
 int a,i;
 float b;
 cout<<"enter 1 for float value and 2 for int value";
 cin>>i;
 switch(i)
 {
 	case 1:
    cout<<"Enter a float value";
    cin>>b;
    s.value(b);
    break;
    case 2:
    cout<<"Enter a int value";
    cin>>a;
    s.value(a);
    break;
    default:
    cout<<"Enter a correct choice";
 }
}
