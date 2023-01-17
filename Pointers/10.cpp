#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int list[5] = {4,3,6,8,9};
    int *ptr;
    ptr = &list[1];
    cout<<*ptr<<" "<<ptr[0]<<endl;
    cout<<*(ptr+1)<<" "<<*(ptr+2)<<endl;
}

// Output : 

//      3   3
//      6   8