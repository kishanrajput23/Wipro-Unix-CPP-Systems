#include<iostream>
using namespace std;
class Person{
      public:
      string name;
      int age;
      string address;
      Person(string name="Sultan",int age=22,string address="Lucknow"){
            this->name=name;
            this->age=age;
            this->address=address;
      }
};
class student: public Person{
      public:
      int year;
      string course;
      string collage_name;
      student(int year=2022, string course="B-Tech", string collage_name="YMCA University"){
            this->year=year;
            this->course=course;
            this->collage_name=collage_name;

      }
      void display(){
            cout<<"Name: "<<name<<endl<<"Age: "<<age<<endl<<"Address: "<<address<<endl<<"Year: "<<year<<endl<<"Course Name: "<<course<<endl<<"Collage Name: "<<collage_name<<endl;
      }
      ~student(){
            cout<<"Collage life going to end!!!"<<endl;
      }
};
class Employee: public Person{
      public:
      int emp_number;
      int date_of_join;
      float salary;
      Employee(int emp_number=20449315, int date_of_join=30, int salary=24688.0){
            this->emp_number=emp_number;
            this->date_of_join=date_of_join;
            this->salary=salary;
      }
      void display(){
            cout<<"Name: "<<name<<endl<<"Age: "<<age<<endl<<"Address: "<<address<<endl<<"Employee Number: "<<emp_number<<endl<<"Date of Joining: "<<date_of_join<<endl<<"Salary is: "<<salary<<endl;
      }
      ~Employee(){
            cout<<"Corporate life going to start!!!"<<endl;
      }

};

int main(){
      student obj;
      obj.display();
      Employee obj1;
      obj1.display();

}