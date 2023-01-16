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
    
    for (int i=0; i<n; i++) {
        for (int j=i+1; j<n; j++) {
            if (arr[i]<arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    cout<<"The numbers arranged in decending order are given below"<<endl;
    for (int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
}