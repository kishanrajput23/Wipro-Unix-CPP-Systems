#include<iostream>
using namespace std;

class b{
    public:
    b()
    {
        cout<<"invoking f from base constructor:::";f();
    }
    virtual void f(){cout<<"base"<<endl;};
     void g()
    {
        cout<<"invoking f from g:::";f();
    }
};
class d:public b{
    int I;
    public:
    d()
    {
        I=90;
        cout<<"invoking f from des contr:::";f();
    }
    void f()
    {
        cout<<"der\n";
        I=88;
    }
};
int main()
{
    b *p=new b;
    p->g();
    cout<<"I----\n";
    p=new d;
    p->g();
}