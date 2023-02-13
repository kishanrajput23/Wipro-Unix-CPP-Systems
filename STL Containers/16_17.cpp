#include <iostream>
#include <list>
#include <iterator>
#include<fstream>
#include <set> 
#include<vector>
using namespace std;

int main()
{
	ifstream fin;
fin.open("my-input-file.txt", ios::in);
	vector<char> v;
char my_character ;

	while (!fin.eof() ) {

	fin.get(my_character);
	v.push_back(my_character);
		
	}
	
	
	   map<my_character,int> mp;
       
       for(int i=0;i<n;i++){
           mp[arr[i]]++;
       }
       
       set <char> s;   
       for(auto x:mp){
       	s.insert(x.first);
           cout<<"("<<x.first<<" "<<x.second<<"times) ";
       }
       
       
       
       ofstream outfile;
   outfile.open("unique.dat");
   for (auto itr = s.begin(); itr != s.end(); ++itr) 
    { 
   outfile << *it << endl;
}
outfile.close();
}

