#include<iostream>      
using namespace std;

# define SWAP(a, b) { int temp; temp = a; a = b; b = temp;}

int main() {
    int x,y;
    
    cout<<"Enter the value of 1st variable a : ";
    cin>>x;
    
    cout<<"Enter the value of 2nd variable b : ";
    cin>>y;
    
    cout<<"Before swapping"<<endl;
    cout<<"x = "<<x<<"\t"<<"y = "<< y<<endl;
    
    SWAP(x,y);
    
    cout<<"After swapping"<<endl;
    cout<<"x = "<<x<<"\t"<<"y = "<< y<<endl;
    
    return 0;
}