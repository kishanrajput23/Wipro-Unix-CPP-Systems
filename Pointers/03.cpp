#include <iostream>

using namespace std;

void swapped(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    
    cout<<"After swapping : a = "<<*a<<" b = "<<*b<<endl;
}

int main() {
    int x, y;
    x = 4;
    y = 5;
    
    cout<<"Before swapping : a = "<<x<<" b = "<<y<<endl;
    
    swapped(&x, &y);
    
    return 0;
}
