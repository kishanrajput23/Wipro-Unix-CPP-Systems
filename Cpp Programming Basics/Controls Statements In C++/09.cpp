#include <iostream>

using namespace std;

int main()
{
    int a, sum=0;
    cout<<"Enter the number : ";
    cin>>a;
    int temp = a;
    
    while (a>0) {
        int rem = a%10;
        sum += rem;
        a /= 10;
    }
    
    cout<<"The sum of the digits of "<<temp<<" is "<<sum;
}