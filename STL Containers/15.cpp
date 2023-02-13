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
	vector<int> v;
int my_character ;

	while (!fin.eof() ) {

	fin.get(my_character);
	v.push_back(my_character);
		
	}
	
	
	   sort(a.begin(), a.end(), greater<int>());
       
       
       ofstream outfile;
   outfile.open("sort.dat");
   for (auto itr = v.begin(); itr != v.end(); ++itr) 
    { 
   outfile << *it << endl;
}
outfile.close();
}

