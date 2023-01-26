#include<iostream>
using namespace std;

class XYZ {
    int a;
    
    public:
    XYZ(int a=10) {
        this->a=a;
    }
    void access() {}

    friend void test();
};

void test() {
    XYZ obj(20);
    obj.a = 12;
    cout<<obj.a<<endl;
}

int main() {
    XYZ obj;
    test();
}