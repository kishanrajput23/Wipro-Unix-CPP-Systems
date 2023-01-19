#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector<string> vect{ "geeksforgeeks practice",
						"geeksforgeeks write",
						"geeksforgeeks ide" };

	// We avoid copy of the whole string
	// object by using reference.
	for (const auto& x : vect) {
		cout << x << '\n';
	}

	return 0;
}
