#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char *str[] = {"Welcome", "To", "Wipro", "Technologies", "Banglore"};
    cout<<sizeof(str)<<" "<<strlen(str[0])<<endl;
    cout<<str[1]<<endl;
    cout<<str[2][2];
    return 0;
}

// Output 
// 40 7
// To
// p