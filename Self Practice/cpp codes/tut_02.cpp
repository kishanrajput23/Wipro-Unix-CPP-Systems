#include<iostream>
using namespace std;

class base
{
    public:
    virtual void f()
    {
        cout<<"base\n";
    }
};
class der_b:public base
{
    public:
    void f()
    {
        cout<<"der 1\n";
    }
};
class der_d:public der_b
{
    public:
    void f()
    {
        cout<<"der 2\n";
    }
};
int main()
{
    base *bptr;
    der_b dObj;
    der_d ddObj;
    bptr=&dObj;
    bptr->f();
    bptr=&ddObj;
    bptr->f();
    der_b *dptr=&ddObj;
    dptr->f();
}