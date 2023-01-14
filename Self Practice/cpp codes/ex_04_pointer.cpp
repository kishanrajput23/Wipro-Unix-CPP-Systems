#include <iostream>
using namespace std;


void f(int *const& x) {
    cout<<x;
}
void g(char *const& x) {
    cout<<x;
}

int main() {

    int i[10];
    int *const p = i;
    int *const &rp = i;
    f(i);
    
    char arr[20];
    g(arr);
}