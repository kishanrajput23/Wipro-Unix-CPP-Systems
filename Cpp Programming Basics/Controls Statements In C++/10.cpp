#include <iostream>

using namespace std;

int main()
{
    int a, fact=1;
    cout<<"Enter the number : ";
    cin>>a;
    
    if (a==0 || a==1) {
        cout<<"The factorial of "<<a<<" is "<<1;
    }
    else {
        for (int i=1; i<=a; i++) {
            fact *= i;
        }
    }
    cout<<"The factorial of "<<a<<" is "<<fact;
}