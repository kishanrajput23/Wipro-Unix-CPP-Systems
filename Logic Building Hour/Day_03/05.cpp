#include<iostream>
using namespace std;

int lastTwoDigitSum(int n1, int n2) {
    if (n1<0) {
        n1 = n1* -1;
    }
    if (n2<0) {
        n2 = n2* -1;
    }
    int sum = n1%10 + n2%10;

    return sum;
}

int main() {

    int num1, num2;

    cout<<"Enter two numbers : ";
    cin>>num1>>num2;

    cout<<"The sum of last two digits of given numbers are  : "<<lastTwoDigitSum(num1, num2)<<endl;

    return 0;
}