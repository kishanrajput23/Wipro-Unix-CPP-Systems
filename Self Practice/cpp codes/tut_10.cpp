#include <iostream>

using namespace std;
class gp{
    public: gp(int a,int b){cout<<a<<" "<<b<<endl;}
};
class p1:virtual public gp{
    public: p1(int x):gp(1,2){cout<<"p1:"<<x<<"\n";}
};
class p2:virtual public gp{
    public: p2(int x):gp(12,22){cout<<"p2:"<<x<<"\n";}
};
class ch:public p1,public p2{
    public: ch():p1(6),p2(7),gp(3,4){cout<<"ch\n";}
};
class gc:public ch{
    public: gc():gp(78,672){}
};
int main()
{
    ch chobj;
    gc gcobj;

    return 0;
}