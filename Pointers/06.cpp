#include <iostream>
#include <cstring>

using namespace std;

int
main ()
{
  int a = 40;
  int *x = &a;
  int **y = &x;
  cout << a << " " << *x << " " << **y << endl;

  return 0;
}

// Output : 40 40 40