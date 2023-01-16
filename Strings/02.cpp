#include <iostream>

using namespace std;

int main() {
    string s1, s2;
    
    cout<<"Enter the first string : ";
    cin>>s1;
    
    cout<<endl<<"Enter the second string : ";
    cin>>s2;
    
    int x = s1.compare(s2);
    
    if (x==0) {
        cout<<endl<<"Entered strings are identical."<<endl;
    }
    else {
        cout<<endl<<"Entered strings are not identical"<<endl;
    }
}