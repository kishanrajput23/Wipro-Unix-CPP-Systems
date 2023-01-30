#include<iostream>
using namespace std;
#define size 10

int main(){
    int A[size];
    int i;
    cout<<"enter the elements in Array"<<endl;
    for(int i=0; i<size; i++) { 
        cin>>A[i];
    }
    
    try {
        cout<<"Enter the index u want to search "<<endl;
        cin>>i;
        if (i>=0 && i<10) { 
            cout<<"Elements at index : " <<i<<" is " <<A[i];
        }
        else { 
            throw(i);
        }
    }
        
    catch(...) {
        cout<<" surprise !!!! Array out of bound exception/......"<<endl;
    }
    return 0;
}