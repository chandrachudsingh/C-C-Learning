//37.class student
#include<iostream>
using namespace std;

class student
{
 int rno,fees;
 static int total;
 
 public:
 student(int rno,int fees)
{
  this->fees=fees;
  total=total+fees;
}
static void display()
{
 cout<<"total fees="<<total;
}
};
int student::total=0;
main()
{
 int r,f;
 student s(1,12000);
 student s1(2,12000);
 student s2(3,12000);
 student s3(4,12000);
 s.display();
}
