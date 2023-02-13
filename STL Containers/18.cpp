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
	
	//FILE 1 OPENING
fin.open("file1", ios::in);
	vector<int> v;
int my_character ;

	while (!fin.eof() ) {

	fin.get(my_character);
	v.push_back(my_character);
	}
	fin.close();
	
	
	//FILE 2 OPENING
	fin.open("file2", ios::in);
	vector<int> v;
int my_character ;

	while (!fin.eof() ) {

	fin.get(my_character);
	v.push_back(my_character);
	}
	fin.close();

	
	   sort(v.begin(), v.end(), greater<int>());
       
       for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	cout << endl;
       
}

