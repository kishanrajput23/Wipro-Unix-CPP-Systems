#include<iostream>
#include<math.h>
using namespace std;

int main() {

    int i,n;
    float x,sum=0;

    cout<<"We have to calculate the sum of the series of a number by using below pattern"<<endl;
    cout<<"x+x^2/2+x^3/3+x^4/4+ . . . . x^n/n"<<endl;
    cout<<"\nEnter value of x and n :\n";
    cin>>x>>n;

    for(i=1;i<=n;++i) {
        sum+=pow(x,i)/i;
    }
    cout<<"\nSum Is = "<<sum<<endl;
    return 0;
}