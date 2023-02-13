#include <iostream>
#include <queue>
using namespace std;
int main(){
	queue<string> q;
	q.push("Computer");
    q.push("Science");
    string s="Lab";
     while((!q.empty())|| q.front()!=s)
    {
	q.pop();
	}
	if(q.front()==s)
	cout<<"Found";
	else 
	cout<<"Not Found";
}
