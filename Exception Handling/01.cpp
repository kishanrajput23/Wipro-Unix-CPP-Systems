#include <iostream>
using namespace std;

int division(int x, int y) {
    if (y ==0) {
        throw "Division by zero condition!";
    }
    return (x/y);
}

int main() {
    int d, n1, n2;
    cout<<"Enter num1\n";
    cin>>n1;

    cout<<"Enter num2\n";
    cin>>n2;
    
    try {
        d = division(n1,n2);
        cout<<"The division is "<<d<<endl;
    }
    
    catch (const char* Error ) {
        cerr << Error << endl;
    }
    return 0;
}