#include<iostream>      
using namespace std;

#define MULTIPLY_BY_TWO(x) {x<<1;}
#define DIVIDE_BY_TWO(x) {x>>1;}

int main() {
    int n;
    
    cout<<"Enter a number : ";
    cin>>n;
    
    cout<<"Multiply by two is : ";
    cout<<(MULTIPLY_BY_TWO(n));
    
    cout<<endl<<"Divide by two is : ";
    cout<<(DIVIDE_BY_TWO(n));
    
    return 0;
}