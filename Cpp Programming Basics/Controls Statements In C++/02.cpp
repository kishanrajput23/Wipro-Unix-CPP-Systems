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
        if (rem!= 9) {
            rem+=1;
        }
        else {
            rem = 0;
        }
        k = k*10 + rem;
        a /= 10;
    }
    
    int n = 0;
    
    while (k>0) {
        int rem = k%10;
        n = n*10 + rem;
        k /= 10;
    }
    
    cout<<"New Number by adding one to each digit is "<<n;
}