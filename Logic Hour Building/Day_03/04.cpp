#include<iostream>
using namespace std;

int secondLast(int n) {
    int digit = (n/10)%10;

    if (digit==0) {
        return -1;
    }
    else{
        return digit;
    }
}

int main() {
    int num;
    cout<<"Enter a number : ";
    cin>>num;

    cout<<"The second digit of given number is "<<secondLast(num)<<endl;

    return 0;
}