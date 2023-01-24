#include<iostream>
using namespace std;

class Sample {
    private:
    int x;
    double y;
    
    public:
    Sample() {
        x = 0;
        y = 0;
        cout<<"Constructor 1"<<endl;
        cout<<"x = "<<x<<"\t"<<"y = "<<y<<endl;
    }
    
    Sample(int a) {
        x = a;
        y = 0;
        cout<<endl<<"Constructor 2"<<endl;
        cout<<"x = "<<x<<"\t"<<"y = "<<y<<endl;
    }
    
    Sample(int a, int b) {
        x = a;
        y = b;
        cout<<endl<<"Constructor 3"<<endl;
        cout<<"x = "<<x<<"\t"<<"y = "<<y<<endl;
    }
    
    Sample(int a, double b) {
        x = a;
        y = b;
        cout<<endl<<"Constructor 4"<<endl;
        cout<<"x = "<<x<<"\t"<<"y = "<<y<<endl;
    }
};

int main() {
    Sample s1;
    Sample s2(20);
    Sample s3(25, 35);
    Sample s4(50, 2.234);
}