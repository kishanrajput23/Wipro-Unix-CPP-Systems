#include <iostream>

using namespace std;

struct EMP {
    char emp_name[50];
    int emp_id;
    int emp_age;
    float emp_salary;
};

int main() {
    struct EMP *e1 = new EMP;
    struct EMP *e2 = new EMP;
    struct EMP *e3 = new EMP;
    
    cout<<"Enter the details of employees"<<endl;
    
    cout<<endl<<"Enter the name of an employee : ";
    cin>>(*e1).emp_name;

    cout<<"Enter the id of an employee : ";
    cin>>(*e1).emp_id;

    cout<<"Enter the age of an employee : ";
    cin>>(*e1).emp_age;

    cout<<"Enter the salary of an employee : ";
    cin>>(*e1).emp_salary;
        
    cout<<"----------------------------------"<<endl;
    
    cout<<endl<<"Enter the name of an employee : ";
    cin>>(*e2).emp_name;

    cout<<"Enter the id of an employee : ";
    cin>>(*e2).emp_id;

    cout<<"Enter the age of an employee : ";
    cin>>(*e2).emp_age;

    cout<<"Enter the salary of an employee : ";
    cin>>(*e2).emp_salary;
        
    cout<<"----------------------------------"<<endl;
    
    cout<<endl<<"Enter the name of an employee : ";
    cin>>(*e3).emp_name;

    cout<<"Enter the id of an employee : ";
    cin>>(*e3).emp_id;

    cout<<"Enter the age of an employee : ";
    cin>>(*e3).emp_age;

    cout<<"Enter the salary of an employee : ";
    cin>>(*e3).emp_salary;
        
    cout<<"----------------------------------"<<endl;
    
    cout<<endl<<"Here are the details entered by the user"<<endl;
    
    cout<<endl<<"Employee name is "<<(*e1).emp_name<<endl;
    cout<<"Employee id is "<<(*e1).emp_id<<endl;
    cout<<"Employee age is "<<(*e1).emp_age<<endl;
    cout<<"Employee salary is "<<(*e1).emp_salary<<endl; 
    
    cout<<endl<<"Employee name is "<<(*e2).emp_name<<endl;
    cout<<"Employee id is "<<(*e2).emp_id<<endl;
    cout<<"Employee age is "<<(*e2).emp_age<<endl;
    cout<<"Employee salary is "<<(*e2).emp_salary<<endl; 
    
    cout<<endl<<"Employee name is "<<(*e3).emp_name<<endl;
    cout<<"Employee id is "<<(*e3).emp_id<<endl;
    cout<<"Employee age is "<<(*e3).emp_age<<endl;
    cout<<"Employee salary is "<<(*e3).emp_salary<<endl; 
    
    return 0;
}