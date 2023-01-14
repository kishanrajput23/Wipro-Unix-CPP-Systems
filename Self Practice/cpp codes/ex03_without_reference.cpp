#include <iostream>
using namespace std;


void f(int i) 
{
    i += 10;
    cout<<i;
}

int main() {

    int k = 12;
    f(k);
    //cout<<k<<endl;
}