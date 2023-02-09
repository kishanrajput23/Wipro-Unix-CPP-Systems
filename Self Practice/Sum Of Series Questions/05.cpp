#include<iostream>
#include<math.h>
using namespace std;

int main() {

    long i,n,x,sum=1;

    cout<<"We have to calculate the sum of the series of a number by using below pattern"<<endl;
    cout<<"1+x^1+x^2+x^3+ . . . . x^n"<<endl;
    cout<<"\nEnter The Value Of X and n :\n";
    cin>>x>>n;

    for(i=1;i<=n;++i) {
        sum+=pow(x,i);
    }
    cout<<"\nSum = "<<sum<<endl;
    return 0;
}