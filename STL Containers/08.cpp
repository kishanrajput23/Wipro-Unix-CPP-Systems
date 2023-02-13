#include <iostream>
#include <string>
#include <map> 
using namespace std;
int main() {
	map<int, string> Students;
	Students.insert(std::pair<int, string>(100, "MD"));
	Students.insert(std::pair<int, string>(101, "IMRAN"));
	Students.insert(std::pair<int, string>(102, "KHAN"));
	std::map<int, string>::iterator it = Students.find(100);
	std::map<int, string>::iterator iT = Students.find(101);
	std::map<int, string>::iterator TT = Students.find(102);
	if (it != Students.end()) {
		std::cout << endl << "Key 100 has the value: => "<< Students.find(100)->second << '\n';
		std::cout << endl << "Key 101 has the value: => "<< Students.find(101)->second << '\n';
		std::cout << endl << "Key 101 has the value: => "<< Students.find(102)->second << '\n';
	}
}
