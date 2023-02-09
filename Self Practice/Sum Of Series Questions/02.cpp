#include<iostream>
using namespace std;

int main() {

    int i,n,sum=0;

    cout<<"We have to calculate the sum of the series of a number by using below pattern"<<endl;
    cout<<"1+2+3+4+5+6 . . . . . n"<<endl;
    cout<<"\nEnter The Value Of N:\n";
    cin>>n;

    for(i=1;i<=n;++i) {
        sum+=i;
    }
    cout<<"\nSum = "<<sum<<endl;
    return 0;
}