
#include <iostream>

using namespace std;
class B1{
    int i1,j1;
    public:
    B1(int x,int y){
        i1=x,j1=y;
        cout<<"B1:"<<i1<<" "<<j1<<"\n";
    }
};
class B2{
    int i2,j2;
    public:
    B2(int x,int y){
        i2=x;j2=y;
        cout<<"B2:"<<i2<<" "<<j2<<"\n";
    }
    
};
class D:public B1,public B2{
    public:
    D(int a,int b,int c):B2(c,a),B1(b,c){
        cout<<"derived\n";
    }
};
int main()
{
    D obj(1,2,3);

    return 0;
}