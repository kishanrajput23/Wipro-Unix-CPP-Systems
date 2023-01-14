#include <iostream>
using namespace std;


void f(int i) 
{
    i += 10;
}

int main() {

    int k = 12;
    f(k);
    cout<<k<<endl;
}