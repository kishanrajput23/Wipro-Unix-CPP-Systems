#include<iostream>
#include<string.h>

using namespace std;

class String{ 
    char A[10];
    char b;
    
    public:
    
    void operator [ ](int i) {
        b = A[i];
        if(i>7 || i<0) {
            throw "out of bond";
        }
    }
    
    String(string K) {
        K.copy(A,sizeof K);
    }
    
    void display() {
        cout<<"Char is :"<<b<<endl;
    }
};

int main() {
    try {
        String s("KISHAN");
        
        s[3];
        s.display();
        String s1("RAI");
        
        s1[8];
        s1.display();
        }
        
    catch (const char* msg) {
        cout << msg << endl;
    }
    
    return 0;
}