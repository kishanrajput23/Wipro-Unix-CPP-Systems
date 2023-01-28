#include<iostream>
using namespace std;

int isOdd(int n) {
    if (n%2!=0) {
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
    cout<<isOdd(num)<<endl;
    return 0;
}