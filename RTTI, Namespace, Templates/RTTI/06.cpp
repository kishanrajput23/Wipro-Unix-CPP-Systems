//RTTI.....6

/*#include <iostream>
#include<typeinfo>

using namespace std;

int main()
{

class Base {}; // abstract

class Der : public Base {};

Base *bptr = new Der();
Der *dptr = new Der();
if(typeid(bptr)==typeid(dptr))
cout<<"identical"<<endl; 
else
cout<<"different"<<endl; 
 return 0;
}*/
//output:
different