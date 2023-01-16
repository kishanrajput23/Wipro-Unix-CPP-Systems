#include <iostream>

using namespace std;

int mystrlen(char *str) {
    int count = 0;
    while (*str != '\0') {
        count++;
        *str++;
    }
    return count;
}

int main() {
    char s1[100];
    cout<<"Enter the string : ";
    cin>>s1;
    cout<<endl<<"The length of the given string is "<<mystrlen(s1)<<endl;
    return 0;
}