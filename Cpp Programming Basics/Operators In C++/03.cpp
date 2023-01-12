#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d;
    
    cout<<"Enter an integer value : ";
    cin>>a;
    
    cout<<"Enter the integer to set 1 and 0 : ";
    cin>>c;
    
    b = 1<<(c-1);
    d = 1<<(c-1);
    
    int k = a|b;
    a&= ~(1<<c);
    
    cout<<"value after set1 : "<<c<<endl;
    cout<<"value after set 0 : "<<a<<endl;
}