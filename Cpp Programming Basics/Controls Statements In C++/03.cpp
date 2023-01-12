#include <iostream>

using namespace std;

int main()
{
    int a;
    cout<<"Enter the amount you want to withdraw : ";
    cin>>a;
    
    int ten = a/10;
    int fifty  = a/50;
    int hundred = a/100;
    
    cout<<"Cashier gives you "<<ten<<" currency notes of 10"<<endl;
    cout<<"Cashier gives you "<<fifty<<" currency notes of 50"<<endl;
    cout<<"Cashier gives you "<<hundred<<" currency notes of 100"<<endl;
    
    return 0;
}
