#include<iostream>
using namespace std;

class Date {
    public:
    int d,m,y;
    
    Date() {
        d=23;
        m=11;
        y=2000;
    }
    
    Date(int a, int b, int c) {
        d=a;
        m=b; 
        y=c;
    }
    
    void display() {
        cout<<"Day : "<<d<<"\t"<<"Month : "<<m<<"\t"<<"Year : "<<y<<endl;
    }
    
    Date CopyDate(Date d) {
        Date d1 = d;
        return d1;
    }
};

int main() {
    Date obj;
    Date obj1(20, 06, 2002);
    obj1.display();
    obj.CopyDate(obj1);
    obj.display();
}