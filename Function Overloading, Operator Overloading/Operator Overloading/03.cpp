#include<iostream>
using namespace std;

class String {
    string s;
    
    public:
    String(string str="abcd") : s(str) {}
    
    char &operator[] (int i) {
        return s[i];
    }

    void display() {
        cout<<"String is: "<<s<<endl;
    }
};

int main() {
    String s("abcd");
    char ch;
    s[0]='A';
    s.display();
    ch=s[1];
    cout<<"ch is "<<ch<<endl;
}