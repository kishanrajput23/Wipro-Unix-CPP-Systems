#include <iostream>

using namespace std;

void mystrrev(char *str1, char *str2) {
    int count=0;
    for (int i=0; str1[i]>'\0'; i++) {
        count++;
    }
    
    int i=0;
    for (int j=count-1; j>=0; j--) {
        str2[i] = str1[j];
        i++;
    }
    str2[i]='\0';
    
    cout<<endl<<"The reversed string is : ";
    cout<<str2<<endl;
}


int main() {
    char s1[20], s2[20];
    
    cout<<"Enter the first string : ";
    cin>>s1;
    
    cout<<"The original string is : ";
    cout<<s1<<endl;
    
    mystrrev(s1, s2);
}