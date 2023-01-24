#include<iostream>
using namespace std;
class A{
    int i,j;
    public:
    virtual void f()
    {
        cout<<"AAAA\n";
    }
};
class B{
    int i,j;
    public:
    void f()
    {
        cout<<"BBBB\n";
    }
};
class C{
    public:
    void f()
    {
        cout<<"CCCC\n";
    }
};
class D{};
int main()
{
    cout<<sizeof(A)<<endl<<sizeof(B)<<endl<<sizeof(C)<<endl<<sizeof(D)<<endl;
}