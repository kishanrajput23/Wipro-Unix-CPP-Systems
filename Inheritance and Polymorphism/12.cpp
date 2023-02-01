#include <iostream>
using namespace std;
class Person
{
public:
    string name;
    Person(string name="Kishan")
    {
        this->name=name;
    }
    void getname()
    {
        cout<<"Person name is : "<<name<<endl;
    }

};
class Participant : public Person
{
};
int main()
{
    string s;
    getline(cin,s);
    Person p1(s);
    Participant p;
    p.getname();
}