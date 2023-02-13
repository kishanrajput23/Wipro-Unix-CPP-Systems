/*
Implement a stack using a linked list with operations push() and pop(). 

push() will push an element onto the stack. 
pop() will remove the element from the stack. 

Each node in the stack must have a integer type data element
Elements to be pushed onto the stack are entered by the user. 

Once all elements are pushed onto the stack, the elements are popped out and is printed on the screen. All elements must be popped out till the stack becomes empty. 

The application must be menu driven with below mentioned options:

  1) Enter data to push on the stack
  2) pop element and print it
  3) Exit 
  */

#include <iostream>
#include <cstdio>

using namespace std;

struct node
{
    int data;
    node *next;
};

class Stack
{
    private:
        node *top;
    public:

        Stack() { top = NULL; }

int push(int x)
{
 {
    node *temp = new node;
    temp->data = x;
    temp->next = top;
    top = temp;
 }
 cout<<"Press any key to continue...."<<endl;
	int a1 = 1;
	cin>>a1;
	return(a1);
}


int pop()
            {
    if (top == NULL)
       { cout << "Stack is Empty" << endl;}
    else
    {
        node *temp = top;
        top = top->next;
        cout << "Popped Element is " << temp->data << endl;
        delete temp;
    }
   cout<<"Press any key to continue...."<<endl;
	int a1;
	cin>>a1;
	return(a1); 

        }

        
int display()
            
{
    if (top == NULL)
        cout << "Stack is Empty" << endl;
    else
    {
        node *temp = top;
        while (temp != NULL)
        {
            cout << temp->data << endl;
            temp = temp->next;
        }
    }

    cout<<"Press any key to continue...."<<endl;
	int a1;
	cin>>a1;
	return(a1);
}

        
};


int main()
{
    Stack s;
    int choice, x;

    come:
    while (1)
    {
        cout << "1. Push Element into the Stack" << endl;
        cout << "2. Pop Element from the Stack" << endl;
        cout << "3. Display the Stack" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter Your Choice: ";
        cin >> choice;
        switch(choice)
        {
            case 1:
                cout << "Enter the element to be pushed: ";
                cin >> x;
                s.push(x);
                goto come;
                break;
            case 2:
                s.pop();
                goto come;
                break;
            case 3:
                s.display();
                goto come;
                break;
            case 4:
                exit(0);
                goto come;
                break;
            default:
                cout << "Invalid Choice" << endl;
        }
    }
    return 0;
}
