#include <iostream>

using namespace std;

int checkPrime(int a, int b) {
    
    cout<<"Prime numbers between "<<a<<" and "<< b << " are: ";
    
    for (int i=a; i<=b; i++) {
        
        if (i == 1 || i == 0)
            continue;
            
        int flag = 1;
            
        for (int j=2; j<i; j++) {
            if (i%j == 0) {
                flag = 0;
                break;
            }
        }
        
        if (flag==1) {
            cout<<i<<" ";
        }
    }
    return 0;
}

int main() {
    int n1,n2;
    cout<<"Enter two positive integers : ";
    cin>>n1>>n2;
    
    checkPrime(n1,n2);
}