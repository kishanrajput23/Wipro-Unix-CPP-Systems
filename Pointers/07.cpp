#include <iostream>
#include <cstring>

using namespace std;

int
main ()
{
  int arr[10] = {2, 3, 4, 5};
  
  int *ptr = arr;
  cout << ptr[0] << endl;
  
  ptr++;
  
  cout << ptr[1] << endl;
  cout << ptr[2] << endl;
  
  return 0;
}

// Output : 
// 2
// 4
// 5