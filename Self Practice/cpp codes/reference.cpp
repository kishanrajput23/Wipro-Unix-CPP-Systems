#include <iostream>

using namespace std;

int main()
{
    cout<<"Hello World"<<endl;
    
    int i = 10;
    int &x = i;
    
    //x = 20;
    
    cout<<"The Value of x = "<<x<<endl;
}
