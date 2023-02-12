//TEMPLATES....1
#include <iostream>
using namespace std;
void swap(int &a,int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a,b,temp;
    cin>>a>>b;
    swap(a,b);
    cout <<a<<endl<<b;
    return 0;
   
}