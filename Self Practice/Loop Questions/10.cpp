#include<iostream>
using namespace std;

int main() {

    int n;
    cout<<"Enter a number to check palindrome : ";
    cin>>n;

    int rev=0;
    int temp = n;

    while (temp>0) {
        int rem = temp%10;
        rev = rev*10 + rem;
        temp /= 10;
    }

    if (rev==n) {
        cout<<"It's a Palindrome"<<endl;
    }
    else {
        cout<<"It's not a Palindrome"<<endl;
    }
    
    return 0;
}