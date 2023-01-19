#include <iostream>
using namespace std;

int main ()
{
   int *num  = NULL; 
   num  = new int;   
 
   cout<<"Enter the number:";
   cin>> *num;
   cout << "The Number is: " << *num  << endl;

   delete num; 

   return 0;
}
