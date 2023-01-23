#include<iostream>
using namespace std;

void myswap(int& m, int& n) {
    int temp = m;
    m = n;
    n = temp;
}

int main() {
    int i, j;
    
    cout<<"Enter two numbers : ";
    cin>>i>>j;
    
    system("clear");
    
    cout<<"\nBefore Swapping : \n";
    cout<<" i : "<<i<<"\t"<<"j : "<<j<<endl;
    
    myswap(i,j);
    
    cout<<"\nAfter Swapping : \n";
    cout<<"i : "<<i<<"\t"<<"j : "<<j<<endl;
}