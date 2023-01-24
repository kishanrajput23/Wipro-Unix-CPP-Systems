#include <iostream>

using namespace std;

class A{
    public:
    virtual void f()
    {
        cout<<"ff in AAAA\n";
    }
    void p()
    {
        cout<<"pp in AAAA\n";
    }
};
class B: public A{
    public:
    void f()
    {
        cout<<"ff in BBBB\n";
    }
    void p()
    {
        cout<<"pp in BBBB\n";
    }
};
int main()
{
    B derived_obj;
    A base_obj;
    A *base_ptr=&base_obj;
    base_ptr->f();
        base_ptr->p();
    base_ptr=&derived_obj;
    base_ptr->f();
    base_ptr->p();
}