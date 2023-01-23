#include<iostream>      
using namespace std;

# define CASE_CHANGE(str) {             \
    for (int i=0; str[i]>'\0'; i++) {   \
        str[i] = toupper(str[i]);       \
    }                                   \
    cout<<str;                          \
}

int main() {
    string s;
    
    cout<<"Enter a string : ";
    cin>>s;
    
    cout<<"Case converted string is : ";
    CASE_CHANGE(s);
    
    return 0;
}