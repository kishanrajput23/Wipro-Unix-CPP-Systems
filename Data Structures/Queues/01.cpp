#include<iostream>
#include<queue>
#include<deque>

using namespace std;

int main() {
      queue <int> q;
      int n;
      cout<<"Enter the numbers : ";
      
      for (int i=0; i<10; i++) {
            cin>>n;
            q.push(n);
      }
  
      while(!q.empty()){
            cout<<q.front()<<" ";
            q.pop();
            
      }
  
      cout<<endl<<"Size is : "<<q.size()<<endl;
      cout<<"Data is removed"<<endl;
}
