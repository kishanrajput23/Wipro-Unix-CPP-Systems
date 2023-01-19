#include <iostream>
using namespace std;

int fun(int& x) { return x; }

int main()
{
    int y = 10;
	cout << fun(y);
	return 0;
}
