#include<iostream>
#include<fstream>
using namespace std;
struct employee {
	unsigned int employeeNo, salary, departmentNo;
	string name, job;
}emp[10];
int main() {
	ofstream file;
	file.open("7_employee_db.txt");
	for (int i = 0; i < 10; i++) {
		cout<<"Enter the employee number of "<<i+1<<" employee = ";
		cin>>emp[i].employeeNo;
		cout<<"Enter the name of "<<i+1<<" employee = ";
		cin>>emp[i].name;
		cout<<"Enter the job of "<<i+1<<" employee = ";
		cin>>emp[i].job;
		cout<<"Enter the salary of "<<i+1<<" employee = ";
		cin>>emp[i].salary;
		cout<<"Enter the department number of "<<i+1<<" employee = ";
		cin>>emp[i].departmentNo;
	}
	for (int i = 0; i < 10; i++) {
		file<<emp[i].employeeNo<<" "<<emp[i].name<<" "<<emp[i].job<<" "<<emp[i].salary<<" "<<emp[i].departmentNo<<endl;
	}
	file.close();
	string searchKey;
	string x;
	cout<<"Enter the employee name which needs to search = ";
	cin>>searchKey;
	ifstream readFile;
	readFile.open("7_employee_db.txt");
	bool ans = false;
	while(getline(readFile, x))
    {
      	if (x.find(searchKey, 0) != string::npos) 
    	{
          	ans=true;
      	}
    }
    if (ans) {
    	cout<<"EMPLOYEE FOUND";
	} else {
		cout<<"EMPLOYEE not FOUND";
	}
	readFile.close();
	return 0;
}
