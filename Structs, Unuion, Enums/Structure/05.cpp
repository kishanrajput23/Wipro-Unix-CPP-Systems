#include <iostream>

using namespace std;

struct EMP {
    char emp_name[50];
    int emp_id;
    int emp_age;
    float emp_salary;
};

int main() {
    struct EMP e1, *eptr;
    
    eptr = &e1;
    
    cout<<"Enter the name of an employee : ";
    cin>>(*eptr).emp_name;

    cout<<"Enter the id of an employee : ";
    cin>>(*eptr).emp_id;

    cout<<"Enter the age of an employee : ";
    cin>>(*eptr).emp_age;

    cout<<"Enter the salary of an employee : ";
    cin>>(*eptr).emp_salary;

    cout<<"-----------------------------------"<<endl;
    
    cout<<endl<<"Here are the details entered by the user"<<endl;

    cout<<endl<<"Employee name is "<<(*eptr).emp_name<<endl;
    cout<<"Employee id is "<<(*eptr).emp_id<<endl;
    cout<<"Employee age is "<<(*eptr).emp_age<<endl;
    cout<<"Employee salary is "<<(*eptr).emp_salary<<endl;
    

    return 0;
}