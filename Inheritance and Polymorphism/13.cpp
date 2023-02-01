#include <iostream>
using namespace std;
class Participant
{
public:
    string name;
    Participant(string name="Kishan")
    {
        this->name=name;
    }
    void getname()
    {
        cout<<"Participant name is : "<<name<<endl;
    }
    void operator=(Participant &p2)
    {
        Participant p1;
        name=p2.name;
    }
};
int main()
{
    Participant p1("Rohit"),p2("Kumar");
    p1=p2;
    p1.getname();
}