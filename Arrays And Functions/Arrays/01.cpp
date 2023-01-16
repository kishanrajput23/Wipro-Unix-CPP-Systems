#include <iostream>

using namespace std;

int main()
{
    int n,pos;
    cout<<"Enter the size of an array : ";
    cin>>n;
    
    int arr[n];
    
    for (int i=0; i<n; i++) {
        int ele;
        cout<<"Enter the elements : ";
        cin>>ele;
        arr[i] = ele;
    }
    
    int sr;
    cout<<"Enter the element you want to search : ";
    cin>>sr;
    
    for (int i=0; i<n; i++) {
        if (arr[i] == sr) {
            pos = i;
        }
        else {
            pos = -1;
        }
    }
    
    if (pos==-1) {
        cout<<"!!!Element not Found!!!";
    }
    else {
        cout<<"***Element "<<sr<<" Found and its index is "<<pos<<"***";
    }
}