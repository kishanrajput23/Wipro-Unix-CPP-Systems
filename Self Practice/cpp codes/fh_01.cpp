#include<iostream>
#include<string.h>
#include<strstream>
#include<fstream>

class MyClass {
    int intMem;
    char chMem;
    char chArr[5];

    public:
    int pubInt;

    MyClass() {}

    MyClass(int i) {
        intMem = 1;
        chMem = 'w';
        strcpy(chArr, "good");
        pubInt = 20;
    }

    void f() {}

    friend ostream & operator << (ostream &s, MyClass c);
};
    
ostream & operator << (ostream &s, MyClass c) {
    s<<"\nIntmem : "<<c.intMem<<endl;
    s<<"\nCharMem : "<<c.chMem<<endl;
    s<<"\nchArr : "<<c.chArr<<endl;
    s<<"\npubInt : "<<c.pubInt<<endl;
    return s;
}

int main() {

    MyClass o1(40), o2;

    cout<<o1<<endl;
    cout<<o2<<endl;

    char *p = new char[50];
    strstream str(p, 50);
    
    str.write((char*)&o1, sizeof(o1));
    cout<<o1<<endl;
    cout<<o2<<endl;

    str.read((char*)&o2, sizeof(o2));
    cout<<o2<<endl;

    return 0;
}