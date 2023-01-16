#include <iostream>

using namespace std;

int main()
{
    int n,pos,sum=0;
    float avg;
    
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
        sum += arr[i];
    }
    
    float total = sum;
    avg = total/n;
    
    cout<<"Sum of all elements in the array is  : "<<sum<<endl;
    cout<<"Average of all input numbers are : "<<avg<<endl;
}