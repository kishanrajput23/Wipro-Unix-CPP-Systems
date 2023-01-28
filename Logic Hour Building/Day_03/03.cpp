#include<iostream>
using namespace std;

int lastDigit(int n) {
    if (n<0) {
        n = n*-1;
        return n%10;
    }
    return n%10;
}

int main() {
    int num;
    cout<<"Enter a number : ";
    cin>>num;

    cout<<"The last digit of "<<num<<" is "<<lastDigit(num)<<endl;
    return 0;
}