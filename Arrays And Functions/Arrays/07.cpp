#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, count=0, sum=0;
    
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
        if (arr[i] %2 == 0) {
            count += 1;
            sum += arr[i];
        }
    }
    
    cout<<"The total count of even numbers in this array is  : "<<count<<endl;
    cout<<"The sum of all even numbers in this array is : "<<sum<<endl;
}