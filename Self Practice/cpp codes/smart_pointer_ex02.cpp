//Returning pointer variable from a function 

#include <iostream>

using namespace std;
int x = 10;
int y = 100;

int *func(int *a, int *b) {
    if (*a>*b) {
        return a;
    }
    else {
        return b;
    }
}

void jlt(int a, int b) {
    int var = 7;
}

int main() {
    int var1, var2, *iptr;
    var1 = 10;
    var2 = 20;
    iptr = func(&var1, &var2);
    jlt(var1+111, var2+89);
    cout<<"The value of *iptr is "<<*iptr<<endl;
}