#include<iostream>
using namespace std;
class Person{
    public:
    string name;
    private:
    int age;
    string contact_number;
    string gender;
    public:
    Person(string name="Kishan",int age=23,string contact_number="7860203281",string gender="Male")
    {
        this->name=name;
        this->age=age;
        this->contact_number=contact_number;
        this->gender=gender;
    }
    void setPersonDetails();
    void getPersonDetails();
};
void Person::setPersonDetails()
{

    cout<<"Enter your Name : ";
    cin>>name;
    cout<<"Enter your age : ";
    cin>>age;
    cout<<"Enter your contact number : ";
    cin>>contact_number;
    cout<<"Enter Your gender : ";
    cin>>gender;
}
void Person::getPersonDetails()
{
    cout<<"Entered Name : "<<name<<endl;
    cout<<"Entered age : "<<age<<endl;
    cout<<"Entered contact number : "<<contact_number<<endl;
    cout<<"Entered gender : "<<gender<<endl;

}
class Student : public Person
{
public:
    string Uname;
    string stream;
    Student()
    {
        Uname="LPU";
        stream="CSE";
    }
    void setStudentDetails()
    {
        cin.ignore();
        cout<<"Enter your University name : ";
        cin>>Uname;
        cout<<"Enter your Stream : ";
        cin>>stream;
    }
    void getStudentDetails()
    {
        cout<<"Entered University name : "<<Uname<<endl;

        cout<<"Entered Stream : "<<stream<<endl;

    }
};
class University : public Student
{
public:
    void display()
    {
        getPersonDetails();
        getStudentDetails();
    }
};
class Beverages
{
public:
    int c=10;
    int b=10;

};
class Coffee : public Beverages
{
public:
    void display()
    {
        cout<<"No of coffees available : "<<c<<endl;
    }

};
class Breakfast : public Coffee
{
public:
    void display()
    {
        cout<<"No of Breakfasts available : "<<b<<endl;
    }
};

int main()
{
    int n;
    cout<<"Enter no of students : ";
    cin>>n;
    University l[n];
    for(int i=0;i<n;i++)
    {
        l[i].setPersonDetails();
        l[i].setStudentDetails();
    }
    for(int i=0;i<n;i++)
    {
        l[i].display();
    }
    Breakfast b;
    b.Coffee::display();
    b.display();
      
}
