#include <iostream>

using namespace std;

int main()
{
    int n, k=0;
    cout<<"Enter the number : ";
    cin>>n;
    
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=(n-i); j++) {
            cout<<"  ";
        }
        while (k!=(2*i-1)) {
            cout<<"* ";
            k++;
        }
        k=0;
        cout<<endl;
    }
    cout<<endl;
    return 0;
}