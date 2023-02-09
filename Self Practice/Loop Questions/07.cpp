#include<iostream>
using namespace std;

int main() {

    int n;
    cout<<"Enter a number to find its fibonacci series : ";
    cin>>n;

    int sum = 0;
    int first_term = 0;
    int second_term = 1;

    if (n==1) {
        cout<<0<<endl;
    }
    else if (n==2) {
        cout<<1<<endl;
    }
    else {
        cout<<first_term<<" "<<second_term<<" ";
        for (int i=3; i<=n; i++) {
            sum = first_term+second_term;
            cout<<sum<<" ";
            first_term = second_term;
            second_term = sum;
        }
        cout<<endl;
    }

    return 0;
}