#include <iostream>
using namespace std;

int main ()
{
    int num1, num2;
    cout<<"Enter two numbers : ";
    cin>>num1>>num2;
 
    if (num1 == num2) {
        cout << "both are equal"<<endl; 
    }
    else if (num1 > num2) {
        cout << num1 << " is greater than " << num2<<endl;
    }
    else {
        cout << num2 << " is greater than " << num1<<endl;
    }

    return 0;
}