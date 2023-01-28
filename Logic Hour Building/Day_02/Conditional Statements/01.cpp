#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    
    //Conditions to check if the number is negative or positive
    if (num > 0)
         cout << "The number is positive"<<endl;
    else if (num < 0)
        cout << "The number is negative"<<endl;
    else
        cout << "Zero"<<endl;
    
    return 0;
}