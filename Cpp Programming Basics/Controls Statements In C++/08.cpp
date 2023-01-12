#include <iostream>

using namespace std;

int main()
{
    int a, count=0;
    cout<<"Enter the number : ";
    cin>>a;
    
    int k = 0;
    int temp = a;
    while (temp>0) {
        int rem = temp%10;
        k = k*10 + rem;
        temp /= 10;
        count+=1;
    }
    
    if (count<2) {
        cout<<"Error : You have entered less than 2 digit number";
    }
    else if (a==k) {
        cout<<a<<" is palindome";
    }
    else {
        cout<<a<<" is not palindrome";
    }
}