#include<iostream>
using namespace std;

void swap(float &a, float &b) {
    float temp = a;
    a = b;
    b = temp;
}

void swap(double &a, double &b) {
    double temp = a;
    a = b;
    b = temp;
}

void swap(long &a, long &b) {
    long temp = a;
    a = b;
    b = temp;
}

int main() {
    float a=1.23, b=2.45;
    cout<<"Before Swapping (Used float values)"<<endl;
    cout<<"a : "<<a<<'\t'<<"b : "<<b<<endl;
    
    swap(a,b);
    
    cout<<"After Swapping"<<endl;
    cout<<"a : "<<a<<'\t'<<"b : "<<b<<endl;
    
    cout<<endl<<"**********************************"<<endl;
    
    double c=5.12345, d=2.876543;
    cout<<endl<<"Before Swapping (Used double values)"<<endl;
    cout<<"a : "<<c<<'\t'<<"b : "<<d<<endl;
    
    swap(c,d);
    
    cout<<"After Swapping"<<endl;
    cout<<"a : "<<c<<'\t'<<"b : "<<d<<endl;
    
    cout<<endl<<"**********************************"<<endl;
    
    long e=123456789, f=987654321;
    cout<<endl<<"Before Swapping (Used long values)"<<endl;
    cout<<"a : "<<e<<'\t'<<"b : "<<f<<endl;
    
    swap(e,f);
    
    cout<<"After Swapping"<<endl;
    cout<<"a : "<<e<<'\t'<<"b : "<<f<<endl;
    
    cout<<endl<<"**********************************"<<endl;
}