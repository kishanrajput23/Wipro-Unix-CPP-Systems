#include <iostream>
#include <cstring>

using namespace std;

struct employee {
    string name;
    int emp_id;
    string location;
};


int main() {
    struct employee e1;
    e1.name = "Kishan";
    e1.emp_id = 2049224;
    e1.location = "Delhi";
    
    cout<<"Employee name is : "<<e1.name<<endl;
    cout<<"Employee id is : "<<e1.emp_id<<endl;
    cout<<"Employee location is : "<<e1.location<<endl;
}
