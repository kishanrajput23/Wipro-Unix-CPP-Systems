#include <iostream>

using namespace std;

int primecheck(int n) {
    int isPrime=1;
    
    for (int i=2; i<=n/2; i++) {
        if (n%i==0) {
            isPrime = 0;
            break;
        }
    }
    return isPrime;
}

int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    
    int cnt=0;
    
    for (int i=2; i<n/2; i++) {
        if (primecheck(i) == 1) {
            if (primecheck(n-i) == 1) {
                cout<<n<<" = "<<i<<" + "<<n-i<<endl;
                cnt = 1;
            }
        }
    }
    if (cnt==0) {
        cout<<"Try Again...";
    }
    return 0;
}