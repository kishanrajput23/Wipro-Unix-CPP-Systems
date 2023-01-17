#include <iostream>

using namespace std;

int main() {
    int arr[10], *ptr;
    
    cout<<"Enter the 10 array elements below:"<<endl;
    for (int i=0; i<10; i++) {
        cin>>arr[i];
    }
    
    ptr = &arr[10];
    int a = 1;
    
    for (int j=9; j>=0; j--) {
        cout<<*(ptr-a)<<" ";
        a += 1;
    }
    
    return 0;
}
