#include <iostream>

using namespace std;

int
main ()
{
  //pointers\

  int *x, **y, a;
  x = &a;

  a = 10;

  cout << "The value of a is " << a << endl;	//a=10
  cout << "The address of variable a is " << x << endl;	//&a
  cout << "The addrerss of variable a is " << &a << endl;	//&a
  cout << "----------------------------------------------------" << endl;

  y = &x;
  cout << "The address of pointer variable *x is " << &x << endl;	//&(x)
  cout << "The address of pointer variable *x is " << y << endl;
  cout << "----------------------------------------------------" << endl;

  cout << "The address of pointer variable *y is " << *y << endl;
  cout << "The value of pointer variable **y is " << **y << endl;
}
