#include <iostream>

using namespace std;

void vowelstoZ(char *str) {
    
    for (int i=0; str[i]>'\0'; i++) {
        if (str[i]=='a' || str[i]=='e' ||str[i]=='i' ||str[i]=='o' ||str[i]=='u' ||
        str[i]=='A' ||str[i]=='E' ||str[i]=='I' ||str[i]=='O' ||str[i]=='U') {
            str[i] = 'z';
        }
    }
    cout<<"Converted string is : "<<str<<endl;
}


int main() {
    char s1[100];
    cout<<"Enter the string : ";
    cin>>s1;
    vowelstoZ(s1);
}