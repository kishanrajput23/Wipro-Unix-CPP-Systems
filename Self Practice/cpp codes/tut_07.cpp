#include <iostream>

using namespace std;
class base{
    public:
    void f(int x){cout<<"base f->larg\n";}//f is overloaded
    void f(int x,int y){cout<<"base f->2args\n";}
    void g(int x){cout<<"base\n";}
    void h(int x){cout<<"base\n";}
};
class der:public base{
    public:
    void g(int x){cout<<"der\n";}//g of base is overrriden
    void h(int x,int y){cout<<"der\n";}//h of base is hidden
};
int main()
{
int res=0;
    der dobj;
res=dobj.f(4,6);
cout<<res<<endl;

    return 0;
}