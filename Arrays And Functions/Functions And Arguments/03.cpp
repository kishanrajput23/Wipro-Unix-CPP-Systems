#include <iostream>

using namespace std;

int factorial(int n) {
    
    if (n==1 || n==0) {
        return 1;
    }
    
    else {
        return n * factorial(n-1);
    }
}

int main() {
    int n1;
    
    cout<<"Enter a positive integer : ";
    cin>>n1;
    
    int fact = factorial(n1);
    cout<<"The factorial of "<<n1<<" is "<<fact<<endl;
}