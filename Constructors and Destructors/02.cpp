#include<iostream>
using namespace std;

class XYZ {
    int a, b;
    
    public:
    XYZ(int i, int j) : a(i), b(2+j) {}
    XYZ(int i) : b(a+1), a(3*i) {}
};

int main() {
    XYZ obj1(2,3);
    XYZ obj2(6);
    return 0;
}

// This assigns the valuye 2 to a and t 5 to b for obj1 and 18 ro a and 19 to b for obj2

// a can't be given in terms of b becaise data members are initialized in the order in 
// which they are created which is the same as the order in which they are declared.