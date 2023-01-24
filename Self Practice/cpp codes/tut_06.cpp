#include <iostream>

using namespace std;
class base{
    public: int x,y;
    void f(){cout<<"base\n";}
    void f(int i){cout<<"base int\n";}
    void g(){cout<<"base g\n";}
    void h(){cout<<"base h\n";}
};
class der:public base{
    public: int x;
    der(){ x=9; base::x=90;}
    void f(){cout<<"der\n";}
    void f(int i,int j){cout<<"der int int\n";}
    void g(int b){}
};

int main()
{
    der dobj;
    cout<<sizeof(der)<<" "<<dobj.base::x<<" "<<dobj.x<<" "<<dobj.y<<endl;
    dobj.base::f(); //base
    dobj.f(); //der
    dobj.base::f(9);
    //dobj.f(8); //error
    dobj.f(2,2);
    dobj.y=99;
    //dobj.g(); //error
    dobj.h();
    

    return 0;
}