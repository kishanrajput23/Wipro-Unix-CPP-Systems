#include<iostream>
using namespace std;

int main() {
    int i,n;
    float sum=0,x,a=1;

    cout<<"We have to calculate the sum of the series of a number by using below pattern"<<endl;
    cout<<"1/2+4/5+7/8+.......N"<<endl;
    cout<<"\nEnter The Number of Terms \n";
    cin>>n;

    for(i=0;i<n;++i) {
        x=a/(a+1);
        sum+=x;
        a+=3;
    }

    cout<<"\n Sum = "<<sum<<endl;
    return 0;
}
