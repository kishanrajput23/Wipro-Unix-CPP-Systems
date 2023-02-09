#include<iostream>
using namespace std;

int main() {
 
    int i,a=-1,b,n;

    cout<<"We have to print the given series 1 -4  7 -10 . . . . . -40"<<endl;
 
    cout<<"Enter The Number of Terms\n";
    cin>>n;
 
    for(i=1;i<=n;i+=3) {
        a*=-1;
        b=i;
        b*=a;
        cout<<b<<" ";
    }
    return 0;
}