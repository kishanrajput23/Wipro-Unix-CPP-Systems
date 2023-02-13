#include <iostream>
#include <list>
#include <iterator>
#include <set> 
#include<fstream>
using namespace std;

int main()
{
	ifstream file("abc.txt");
	 set <int> s;         

 int n;
if(file.is_open()){
 while(file>>n){
s.insert(n);
 }
 
 cout << "The set s is :"; 
    for (auto itr = s.begin(); itr != s.end(); ++itr) 
    { 
        cout << " " << *itr; 
    } 
    cout << endl; 
    return 0; 
}

