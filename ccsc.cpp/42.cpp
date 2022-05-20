//42.
#include<iostream>
using namespace std;
static int c;

class student
{
 public:
 int rno;
 char n[20];
 
 student()
 {
  cout<<"Enter rollno";
  cin>>rno;
  cout<<"Enter name";
  cin>>n;
  count();
 }
 void count()
 {
  c++;
 }
};
main()
{
   student a[2];
   cout<<"Number of objects="<<c;
}
