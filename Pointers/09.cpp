#include <iostream>
#include <cstring>

using namespace std;

int
main ()
{
  int list[3], *i;

  list[0] = 10;
  list[1] = 20;
  list[2] = 30;

  i = list;

  cout << ++*i << endl;
  cout << *++i << endl;
  cout << (*i)-- << endl;
  cout << *i << endl;
  return 0;
}

// Output : 
// 11
// 20
// 20
// 19
