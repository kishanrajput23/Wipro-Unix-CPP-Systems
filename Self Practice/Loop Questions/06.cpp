#include<iostream>
using namespace std;

int main() {

    int n;
    cout<<"Enter a number to find its binary : ";
    cin>>n;
    
    int arr[n], k=0;

    while (n>0) {
        arr[k] = n%2;
        n/=2;
        k++;
    }

    for (int i=k-1; i>=0; i--) {
        cout<<arr[i];
    }
    cout<<endl;

    return 0;
}