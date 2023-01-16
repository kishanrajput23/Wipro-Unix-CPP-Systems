#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char *s[] = {"DELHI", "PUNE", "GOA", "KOCHI"};
    char *p;
    p = s[1];
    cout<<*p;
    
    p++;
    cout<<*p;
    cout<<*(p+2);
    return 0;
}

// Output : PUE