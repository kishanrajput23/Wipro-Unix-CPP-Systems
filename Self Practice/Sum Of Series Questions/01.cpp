#include<iostream>
#include<math.h>
using namespace std;

int main() {

 double sum=0,a;
 int n,i;

    cout<<"We have to calculate the sum of the series of a number by using below pattern"<<endl;
    cout<<"1+1/2^2+1/3^3+…..+1/n^n "<<endl;
    cout<<"\nEnter The Value Of n :\n";
    cin>>n;

    for(i=1;i<=n;++i) {
        a=1/pow(i,i);
        sum+=a;
    }
    cout<<"Sum = "<<sum<<endl<<endl;
    return 0;
}