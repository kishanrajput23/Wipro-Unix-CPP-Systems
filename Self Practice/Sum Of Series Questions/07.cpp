#include<iostream>
using namespace std;

int main() {

    int i,n,sum=0;

    cout<<"We have to calculate the sum of the series of a number by using below pattern"<<endl;
    cout<<"1+2+4+8+16+32+.....n"<<endl;
 
    cout<<"Enter The Number Of Terms \n";
    cin>>n;
 
    cout<<"\nSeries I sGiven Below\n\n";
    for(i=1;i<=n;i*=2) {
        sum+=i;
        cout<<i<<" ";
    }
    
    cout<<"\n\nSum Of Above Series Is\n";
    cout<<sum <<endl;;
  
    return 0;
}