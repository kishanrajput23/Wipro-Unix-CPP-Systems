#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    
    cout<<"Enter the size of an array : ";
    cin>>n;
    
    int arr[n];
    
    for (int i=0; i<n; i++) {
        int ele;
        cout<<"Enter the elements : ";
        cin>>ele;
        arr[i] = ele;
    }
    
    int k = *max_element(arr, arr+n);
    cout<<"The largest element of this array is : "<<k;
}