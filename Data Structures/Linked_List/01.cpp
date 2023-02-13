#include<iostream>
#include<cstring>
#include<cstdlib>

using namespace std;

struct Employee {
    int EmployeeID;
    string EmployeeName;
    string Designation;
    Employee *next;    //Self referencing pointer
};

class SingleLinkedList {
    private:
        Employee *head;
    public:
        SingleLinkedList() {
            head = NULL;     // Initial value of NULL
        }
        int createNode(int EmployeeID, string EmployeeName, string Designation) {
            Employee *temp = new Employee;     // Creation of new pointer
            temp->EmployeeID = EmployeeID;     //Assigning Values
            temp->EmployeeName = EmployeeName; //Assigning Values
            temp->Designation = Designation;   //Assigning Values
            temp->next = head; // The statement temp -> next = head sets the next reference of the node stored in the temp variable to point to the current head node.   
            head = temp; // The statement head = temp then updates the reference to the head node so that it now points to the node stored in the temp variable.

// This effectively makes the node stored in temp the new head node of the linked list, and the previous head node becomes the second node in the list


    cout<<"Press any key to continue...."<<endl;
	int a1;
	cin>>a1;
	return(a1);
        }


        int deleteNode(int EmployeeID) {
            Employee *temp = head;
            Employee *prev = NULL;
            if(temp->EmployeeID == EmployeeID) {
                head = temp->next;      // if head pointer contains the employee ID
                delete temp;

            }
            while(temp->EmployeeID != EmployeeID) {
                prev = temp;      // NULL to current
                temp = temp->next;   //For incrementing the address
            }
            prev->next = temp->next;  //updates the next reference of a node, The statement takes the node that prev references, accesses its next member, and reassigns it to the value of temp->next. This effectively removes the node that temp references from the list by making its next reference skip over it.
            delete temp;

            cout<<"Press any key to continue...."<<endl;
	int a1;
	cin>>a1;
	return(a1);
        }
        int insertNode(int EmployeeID, string EmployeeName, string Designation, int position) {
            Employee *temp = new Employee;
            temp->EmployeeID = EmployeeID;
            temp->EmployeeName = EmployeeName;
            temp->Designation = Designation;
            Employee *current = head;
            if(position == 1) {         // Add node to the head (at first place)
                temp->next = head;
                head = temp;
            }
            for(int i = 1; i < position-1; i++) {
                current = current->next;     //  This brings us to the current location
            }
            temp->next = current->next;    // For assigning current value of pointer
            current->next = temp;          // assigning current pointer to updated address

    cout<<"Press any key to continue...."<<endl;
	int a1;
	cin>>a1;
	return(a1);
        }
        int displayNode() {
            Employee *temp = head;
            while(temp != NULL) {
                cout << "Employee ID: " << temp->EmployeeID << endl;
                cout << "Employee Name: " << temp->EmployeeName << endl;
                cout << "Designation: " << temp->Designation << endl;
                cout << endl;
                temp = temp->next;    // The statement temp = temp -> next updates the value of the temp variable in a way that it now references the next node in a singly linked list.

 
            }

    cout<<"Press any key to continue...."<<endl;
	int a1;
	cin>>a1;
	return(a1);
 }


};

int main() {
    SingleLinkedList sll;
    int option, EmployeeID;
    string EmployeeName, Designation;
    int position;

    come:       //To transfer the flow of program.
    while(true) {
        cout << "Single Linked List Operations: " << endl;
        cout << "1. Create Node" << endl;
        cout << "2. Delete Node" << endl;
        cout << "3. Insert Node" << endl;
        cout << "4. Display Node" << endl;
        cout << "5. Exit" << endl;                  
        cout << "Enter your option (1..5): ";
        cin >> option;
        switch(option) {
            case 1:
                cout << "Enter Employee ID: ";
                cin >> EmployeeID;
                cout << "Enter Employee Name: ";
                cin >> EmployeeName;
                cout << "Enter Designation: ";
                cin >> Designation;
                sll.createNode(EmployeeID, EmployeeName, Designation);
                 goto come;
                break;
            case 2:
                cout << "Enter the Employee ID to delete: ";
                cin >> EmployeeID;
                sll.deleteNode(EmployeeID);
                 goto come;
                break;
            case 3:
                cout << "Enter the Employee ID after which the node is to be inserted: ";
                cin >> EmployeeID;
                cout << "Enter Employee ID: ";
                cin >> EmployeeID;
                cout << "Enter Employee Name: ";
                cin >> EmployeeName;
                cout << "Enter Employee Designation: ";
                cin >> Designation;
                sll.insertNode(EmployeeID, EmployeeName, Designation, EmployeeID);
                 goto come;
                break;
            case 4:
                sll.displayNode();
                 goto come;
                break;
            case 5:
                return 0;
            default:
                cout << "Invalid choice. Try again." << endl;
        }
    }
    return 0;
}


