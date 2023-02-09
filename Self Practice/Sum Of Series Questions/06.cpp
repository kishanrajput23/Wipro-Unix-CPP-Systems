#include <iostream>

using namespace std;

int main()
{
    cout<<"We have to calculate the sum of the series of a number by using below pattern"<<endl;
    cout<<"1^2+3^2+5^2+ . . . . n^2"<<endl;
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    
    int sum = 0;
    
    for (int i=1; i<=n; i+=2) {
        sum += i*i;
    }

    cout<<"The sum of the series of given number is : "<<sum<<endl;
}
