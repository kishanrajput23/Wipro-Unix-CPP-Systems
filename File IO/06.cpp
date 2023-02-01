#include<iostream>
#include<fstream>
using namespace std;
int main() {
	fstream file;
	string searchKey;
	char *filename;
	string x;
	cout<<"Enter the string to be searched : ";
	cin>>searchKey;
	cout<<"Enter the name of the file on which the string has to be searched : ";
	cin>>filename;
	file.open(filename);
	bool ans = false;
	while(getline(file, x))
    {
      	if (x.find(searchKey, 0) != string::npos) 
    	{
          	ans=true;
      	}
    }
    if (ans) {
    	cout<<"STRING FOUND";
	} else {
		cout<<"STRING not FOUND";
	}
	file.close();
	return 0;
}
