#include <iostream>

using namespace std;

void mystrcat(char *str1, char *str2, char *str3) {
    int j=0;
    
    for (int i=0; str1[i]>'\0'; i++) {
        str3[i] = str1[i];
        j++;
    }
    
    for(int i=0; str2[i]>'\0'; i++) {
        str3[j] = str2[i];
        j++;
    }
    str3[j]='\0';
    cout<<str3;
}


int main() {
    char s1[20], s2[20], s3[20];
    
    cout<<"Enter the first string : ";
    cin>>s1;
    
    cout<<endl<<"Enter the second string : ";
    cin>>s2;
    
    mystrcat(s1, s2, s3);
}