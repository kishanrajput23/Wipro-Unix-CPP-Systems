#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char str1[] = "HelloWipro";
    char str2[20];
    char *t, *s;
    
    
    memset(str2, 0, sizeof(str2));
    s = str1;
    t = str2;
    
    while(*s) {
        *t++ = *s++;
    }
    cout<<str2;
    return 0;
}

// Output : HelloWipro