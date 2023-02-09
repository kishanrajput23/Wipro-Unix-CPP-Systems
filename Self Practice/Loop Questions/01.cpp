#include<iostream>
using namespace std;

int main() {

    int n;
    cout<<"Enter a number to find factorial : ";
    cin>>n;

    int prod = 1;

    for (int i=1; i<=n; i++) {
        prod *= i;
    }

    cout<<"The factorial of given number is : "<<prod<<endl;
    return 0;
}