#include <iostream>

using namespace std;

int main()
{
    int a;
    cout<<"Enter the number ";
    cin>>a;
    
    int k = 0;
    while (a>0) {
        int rem = a%10;
        k = k*10 + rem;
        a /= 10;
    }
    
    cout<<"The reversed number is "<<k;
}
