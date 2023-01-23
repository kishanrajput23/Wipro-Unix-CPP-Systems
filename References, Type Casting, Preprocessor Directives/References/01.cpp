#include<iostream>
using namespace std;

int fact(int n) {
    if (n==0 || n==1) {
        return 1;
    }
    else {
        return n*fact(n-1);
    }
}

int main() {
    int num;
    
    cout<<"Enter the number for which you want to find factorial : ";
    cin>>num;
    
    if (num<0) {
        cout<<"Invalid Argument"<<endl;
    }
    
    cout<<"The factorial of "<<num<<" is "<<fact(num)<<endl;
}