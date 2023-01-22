#include <iostream>
using namespace std;

struct DATA {
    int num1;
    int num2;
    int num3;
    int average;
};

int n1, n2, n3, avg;

int CalculateAvg(struct DATA *d) {
    avg = (n1+n2+n3) / 3;
    (*d).average = avg;
    return avg;
}

int main() {
    struct DATA d, *ptr;
    ptr = &d;
    
    cout<<"Enter the first number : ";
    cin>>n1;
    
    cout<<"Enter the second number : ";
    cin>>n2;
    
    cout<<"Enter the third number : ";
    cin>>n3;
    
    d.num1 = n1;
    d.num2 = n2;
    d.num3 = n3;
    
    int temp = CalculateAvg(ptr);
    
    cout<<"The average value of all 3 numbers are : "<<temp<<endl;
    
    return 0;
}