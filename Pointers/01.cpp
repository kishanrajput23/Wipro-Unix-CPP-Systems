#include <iostream>

using namespace std;

int main() {
    int arr1[10], arr2[10];
    
    cout<<"Enter your marks below : "<<endl;
    
    for (int i=0; i<10; i++) {
        cin>>arr1[i];
    }
    
    int length = *(&arr1+1) - arr1;
    cout<<"The size of the array is "<<length<<endl;
    
    int *p1 = arr1;
    int *p2 = arr2;
    
    for (int i=0; i<10; i++) {
        *(p2+i) = *(p1+i);
        cout<<*(p2+i)<<" ";
    }
    
    return 0;
}
