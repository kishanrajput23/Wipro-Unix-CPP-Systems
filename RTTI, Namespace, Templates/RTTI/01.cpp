//RTTI....1

#include <iostream> 
#include <typeinfo>    // for 'typeid'

class Base {
public:
   virtual ~Base() {}
};
class Number {};
class Integer : public Number {
};

int main() 
{
    Base *base;
    Integer i;
    std::cout << typeid(base).name() << std::endl;

     return 0;
}

//output:
//P4Base