#include<iostream>
using namespace std;

int isEven(int n) {
    if (n%2==0 || n==0) {
        return 2;
    }
    else {
        return 1;
    }
}

int main() {
    int num;
    cout<<"Enter an integer number : ";
    cin>>num;
    cout<<isEven(num)<<endl;
    return 0;
}