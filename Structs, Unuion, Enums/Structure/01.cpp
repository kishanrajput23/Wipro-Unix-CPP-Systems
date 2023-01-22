#include <iostream>

using namespace std;

struct EMP {
    char emp_name[50];
    int emp_id;
    int emp_age;
    float emp_salary;
};

int main() {
    struct EMP e1, e2, e3;

    cout<<"Enter the data for employee 1"<<endl;
    cout<<endl<<"Enter the name : ";
    cin>>e1.emp_name;

    cout<<"Enter the employee id : ";
    cin>>e1.emp_id;

    cout<<"Enter the employee age : ";
    cin>>e1.emp_age;

    cout<<"Enter the employee salary : ";
    cin>>e1.emp_salary;

    cout<<"-----------------------------------"<<endl;

    cout<<"Enter the data for employee 2"<<endl;
    cout<<"Enter the name : ";
    cin>>e2.emp_name;

    cout<<"Enter the employee id : ";
    cin>>e2.emp_id;

    cout<<"Enter the employee age : ";
    cin>>e2.emp_age;

    cout<<"Enter the employee salary : ";
    cin>>e2.emp_salary;

    cout<<"----------------------------------"<<endl;

    cout<<"Enter the data for employee 3"<<endl;
    cout<<"Enter the name : ";
    cin>>e3.emp_name;

    cout<<"Enter the employee id : ";
    cin>>e3.emp_id;

    cout<<"Enter the employee age : ";
    cin>>e3.emp_age;
    
    cout<<"Enter the employee salary : ";
    cin>>e3.emp_salary;
    
    cout<<endl<<"*********************************"<<endl;
    cout<<endl<<"Here are the details entered by the user"<<endl;
    
    cout<<endl<<"Details of employee 1"<<endl;
    cout<<endl<<"Employee name is "<<e1.emp_name<<endl;
    cout<<"Employee id is "<<e1.emp_id<<endl;
    cout<<"Employee age is "<<e1.emp_age<<endl;
    cout<<"Employee salary is "<<e1.emp_salary<<endl;
    
    cout<<endl<<"Details of employee 2"<<endl;
    cout<<endl<<"Employee name is "<<e2.emp_name<<endl;
    cout<<"Employee id is "<<e2.emp_id<<endl;
    cout<<"Employee age is "<<e2.emp_age<<endl;
    cout<<"Employee salary is "<<e2.emp_salary<<endl;
    
    cout<<endl<<"Details of employee 3"<<endl;
    cout<<endl<<"Employee name is "<<e3.emp_name<<endl;
    cout<<"Employee id is "<<e3.emp_id<<endl;
    cout<<"Employee age is "<<e3.emp_age<<endl;
    cout<<"Employee salary is "<<e3.emp_salary<<endl;
    
    if (sizeof(struct EMP) == sizeof(e1) && sizeof(struct EMP) == sizeof(e2) && sizeof(struct EMP) == sizeof(e3)) {
        cout<<endl<<"The size of struct EMP is "<<sizeof(struct EMP)<<endl;
        cout<<"The size of struct is correct."<<endl;
    }
    else {
        cout<<"The size of struct EMP is incorrect"<<endl;
    }
    
    return 0;
}