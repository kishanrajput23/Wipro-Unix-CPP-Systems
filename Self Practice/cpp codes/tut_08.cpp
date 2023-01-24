
#include <iostream>

using namespace std;
class base{
    public:
    int x;
    base() { cout<<"base constr\n"; x=10;}
    ~base(){cout<<"base destr\n";}
};
class der1:public virtual base{
    public:
    der1(){cout<<"der1 constr\n";}
    ~der1(){cout<<"der1 destr\n";}
};
class der2:public virtual base{
    public:
    der2(){cout<<"der2 constr\n";}
    ~der2(){cout<<"der2 destr\n";}
};
class sub:public der1,public der2{};
int main()
{
    sub subObj;
    cout<<sizeof(sub)<<endl;//size==4(x)+8(vptr.der1)+8(vptr.der2)

    return 0;
}