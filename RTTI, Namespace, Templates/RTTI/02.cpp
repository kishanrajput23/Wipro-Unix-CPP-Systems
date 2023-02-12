//RTTI...2

/*#include <iostream>
using namespace std;

class Vehicle{};
class Fourwheeler : public Vehicle{};
class Car : public Fourwheeler{};

int main()
{
//Vehicle *vptr = new Car;
//Fourwheeler *fptr = dynamic_cast<Fourwheeler*>(fptr);
Fourwheeler *fptr = new Fourwheeler;
Car *cptr = dynamic_cast<Car*>(fptr);
//Fourwheeler *fptr = new Fourwheeler;
//Vehicle*vptr = dynamic_cast<Vehicle*>(vptr);

    return 0;
}*/
//output:
option (b) fail

//error:cannot dynamic_cast ‘fptr’ (of type ‘class Fourwheeler*’) to type ‘class Car*’ (source type is not polymorphic)
//Car *cptr = dynamic_cast<Car*>(fptr);
