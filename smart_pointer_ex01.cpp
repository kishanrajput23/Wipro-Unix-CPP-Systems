#include <iostream>

using namespace std;

void func(int *a, int b) {
    *a = 400;
    b = 600;
}


int main() {
    int var1 = 10;
    int var2 = 20;
    
    func(&var1, var2);
    
    cout<<"The value of var1 is : "<<var1<<endl;
    cout<<"The value of var 2 is : "<<var2<<endl;
    
    return 0;
}