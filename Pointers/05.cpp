#include <iostream>
#include <cstring>

using namespace std;

int n = 20;

int main () {
  int *ptr = &n;
  
  cout<<*ptr;
  
  (*ptr)++;
  
  cout<<*ptr;
  
  return 0;
}

// Output : 2021