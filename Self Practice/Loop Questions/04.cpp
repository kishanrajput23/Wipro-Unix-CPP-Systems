#include<iostream>
using namespace std;

int main() {

    int n;
    cout<<"Enter a number to find its reverse : ";
    cin>>n;

    int rev = 0;

    int temp = n;

    while(temp>0) {
        int rem = temp%10;
        rev = rev*10 + rem;
        temp/=10;
    }

    cout<<"The reverse of the given number is : "<<rev<<endl;

    return 0;
}