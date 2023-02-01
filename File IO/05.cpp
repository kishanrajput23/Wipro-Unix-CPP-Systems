#include<iostream>
#include<fstream>
using namespace std;
int main(int argc, char *argv[]) {
	if (argc == 3) {
		ifstream file;
		ofstream newFile;
		newFile.open(argv[2]);
		file.open(argv[1]);
		file.seekg(0, ios::beg);
		int len = file.tellg();
		char c;
	    while (file.get(c)) 
	    {
	        newFile<<c;
	    }	
	} else {
		cout<<"There are less number of arguments you have passed. Please provide valid arguments.";
	}
	return 0;
}
