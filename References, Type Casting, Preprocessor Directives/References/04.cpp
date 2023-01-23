#include<iostream>      
using namespace std;

int GetVowelCount(char str[]) {
    int cnt = 0;
    for (int i=0; str[i]>'\0'; i++) {
        if (str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || 
        str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U') {
            cnt += 1;
        }
    }
    return cnt;
}

int main() {
    char str[20];
    while (true) {
        cout<<"Enter a word : ";
        cin>>str;
        
        int count = GetVowelCount(str);
        
        if (count >= 3) {
            cout<<str<<" : "<<count<<endl;
        }
    }
}