#include<iostream>
using namespace std;

class String {
    public:
    string s;
    
    String():s("Hello") {}

    friend String operator +(String s1, string i) {
        String s2;
        s2.s = s1.s+i;
        return s2;
    }

    friend String operator +(string i, String s1) {
        String s2;
        s2.s = s1.s+i;
        return s2;
    }

    void display() {
        cout<<"String is : "<<s<<endl;
    }
};

int main() {
    String s1, s2;

    s1.display();
    
    s2 = (s1 + "sample");
    s2.display();

    s2 = ("sample" + s1);
    s2.display();

    return 0;
}