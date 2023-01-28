// This C++ program compiles fine
// as index out of bound
// is not checked in C.

#include <iostream>
using namespace std;

int main()
{
	int arr[2];

	cout << arr[3] << " ";
	cout << arr[-2] << " ";

	return 0;
}


// Output : 211343841 4195777 