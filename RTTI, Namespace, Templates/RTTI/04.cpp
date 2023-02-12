//RTTI....4
/*#include <iostream>
#include<cassert>

using namespace std;
class Base{};
class Der1 : public Base{};
Der1 dobj;
Base & bref = dobj;
Base bobj;
Base *bptr = &dobj;

int main()
{
 assert (typeid(bref) == typeid(dobj));
 assert (typeid(bobj) == typeid(dobj));
 assert (typeid(*bptr) == typeid(dobj));
 return 0;
 }*/

//output:
assert (typeid(bobj) == typeid(dobj));
 assert (typeid(*bptr) == typeid(dobj)); //these Assertions are true