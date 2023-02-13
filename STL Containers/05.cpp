#include <iostream>
#include <list>
#include <iterator>
#include<fstream>
using namespace std;

int main()
{
	ifstream file("abc.txt");
	vector<int> v;
 int n;
if(file.is_open()){
 while(file>>n){
v.push_back(n);
 }
}

for(auto i=v.begin();i!=v.end();++i){
		cout<<*i<<endl;
	}

}
