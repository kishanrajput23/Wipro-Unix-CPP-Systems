#include<iostream>
using namespace std;

class Vector { 
    int a,b;
    int divide;
    
    public:
        Vector(int k,int l) {
            a = k;
            b = l;
        }
        
        void operator /(Vector v) {
            if(b==0) { 
                throw "Division by zero condition";
            }
            divide = a / b;
        }
        
        void display() { 
            cout<<"disvison is :"<<divide<<endl;
        }
};

int main() {
    try {
        Vector v(10,5);
        v /(v);     //operator overloading
        v.display();

        Vector v1(10,0);
        v1 /(v1);       //operator overloading
        v1.display();
    }
    
    catch (const char* msg) { 
        cout << msg << endl;
    }
    return 0;
}