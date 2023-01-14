#include <iostream>

using namespace std;

int
main ()
{
  //pointers//
  
//   const int x=10;       //remove const to see 1st part output
//   int const y = 10;
  
//   int *p = &x;
//   *p = -100;
//   cout<<"Modified address of *p is"<<*p<<endl;
//   cout<<"-------------------------------"endl;
  
  int a = 10;
//   const int *p1 = &a;
//   // *p1 = 11;              //Shows error as *p1 is constant
//   p1 = (int*)malloc(sizeof(int));
//   cout<<"The memory address of *p1 is "<<p1<<endl;
//   cout<<"---------------------------------"<<endl;
  
  int *const p2 = &a;
  *p2 = 11;p2 = (int*)malloc(sizeof(int));
  cout<<"Modified address of *p2 is "<<p2<<endl;
}
