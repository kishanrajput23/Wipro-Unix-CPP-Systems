#include <iostream>

using namespace std;

int main()
{
    int a,count=0;
    
    cout<<"Enter the number : ";
    cin>>a;
    
    if (a==0 || a==1) {
        cout<<a<<" is neither prime nor composite"<<endl;
    }
    else {
        for (int i=2; i<a; i++) {
            if (a%i == 0) {
                count += 1;
                break;
            }
        }
    }
    
    if (count>0) {
        cout<<a<<" is not a prime number";
    }
    else {
        cout<<a<<" is a prime number";
    }
}