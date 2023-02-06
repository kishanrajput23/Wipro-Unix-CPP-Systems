#include<iostream>
#include<queue>
#include<fstream>

using namespace std;
 
int main() {
    queue<int> q;
    ifstream file("abc.txt");
    int n;
    
    if(file.is_open()) {
        while(file>>n){
            q.push(n);
    }
 
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
}
    cout<<endl<<"Size is : "<<q.size()<<endl;
    cout<<"Data is Removed"<<endl;
}