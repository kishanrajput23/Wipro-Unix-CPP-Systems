#include <iostream>

using namespace std;

int checkidentical(char *str1, char *str2) {
    int count = 1;
    for (int i=0; str1[i]>'\0'; i++) {
        for (int j=0; str2[j]>'\0'; j++) {
            if (tolower(str1[i] != tolower(str2[i]))) {
                count = 0;
                break;
            }
        }
    }
    return count;
}


int main() {
    char s1[20], s2[20];
    
    cout<<"Enter the first string : ";
    cin>>s1;
    
    cout<<endl<<"Enter the second string : ";
    cin>>s2;
    
    cout<<checkidentical(s1, s2);
}