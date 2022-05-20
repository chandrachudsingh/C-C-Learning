#include<iostream>
using namespace std;

class sum
{
    public:
        int sum;
        void add(int a,int b);
};
void sum::add(int a,int b)
{
    sum=a+b;
    cout<<"Sum of two numbers="<<sum;
}
int main()
{
    int a,b;
    sum s;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    s.add(a,b);
    return 0;
}

