#include<iostream>      
using namespace std;

# define ODD_EVEN(n) { (n%2==0) ? cout<<"Even" : cout<<"Odd";}

int main() {
    int x;
    
    cout<<"Enter a number : ";
    cin>>x;
    
    cout<<"The given number is : ";
    ODD_EVEN(x);
    
    return 0;
}