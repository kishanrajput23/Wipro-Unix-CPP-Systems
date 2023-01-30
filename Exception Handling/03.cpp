#include<iostream>
#include<fstream>
using namespace std;

int main() { 
    int fd, n;
    char fname[10], text[10];
    cout<<"Enter the file name: ";
    cin>>fname;
    
    try {
        fstream file(fname, ios::in | ios::out);
        if (!file) {
            throw ("File open error") ;
        }
        cout << "Enter the data: ";
        cin>> text;
        file << text;
        file.close();
    } 
    
    catch (...) {
        cout << "File open error" << endl;
    } 
    
    return 0;
}