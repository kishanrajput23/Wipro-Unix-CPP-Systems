#include<iostream>
#include<fstream>
using namespace std;
int main() {
	ifstream file;
	ofstream newFile;
	newFile.open("4_reverseText.txt");
	file.open("4_text.txt");
	file.seekg(0, ios::end);
	int len = file.tellg();
	char c;
    while (len--) 
    {
        file.seekg(len, ios::beg);
        file>>noskipws>>c;
        newFile<<c;
    }
	return 0;
}
