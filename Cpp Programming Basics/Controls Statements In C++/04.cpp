#include <iostream>

using namespace std;

int main()
{
    int a;
    cout<<"Enter the number ";
    cin>>a;
    
    if (a>0) {
        cout<<a<<" is a positive number";
    }
    else if (a==0){
        cout<<"0 is neither negative or positive";
    }
    else {
        cout<<a<<" is a negative number";
    }
    
    return 0;
}
