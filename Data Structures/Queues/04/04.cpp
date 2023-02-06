#include<iostream>
#include<fstream>
#include<string>
#include<queue>

using namespace std;

int main() {
    queue<int> myqueue;
    int front=0, rear=0, n;
    string s;
    ifstream in("data.txt");
    getline(in, s);
    cout<<"Input read from the file is : "<<s<<endl;

    n=s.size(); 
    int arr[n];  
    while (rear!=n) { 
        arr[rear] = s[rear]-'0';
        rear++; 
    }

    cout<<"Size : "<<rear<<endl;

    for (int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int one_count = 0, zero_count = 0;
    int flag = 0;

    for (int i=0; i<rear; i++) {
        if (arr[i]==0) {
            if (arr[i]==arr[i+1]) {
                continue;
            }
            else{
                zero_count++;
            }
        }
        else {
            if (arr[i]==arr[i+1]){
                continue;
            }
            else {
                one_count++;
            }
        }
    }
    
    cout<<"Zero Count : "<<zero_count<<endl;
    cout<<"One Count : "<<one_count<<endl;
}