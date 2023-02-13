/*
Implement a stack with operations push() and pop()

push() will push an element onto the stack. 
pop() will remove the element from the stack. 

Data to be pushed onto the stack is read from a file and the file name is passed as a command line argument to your program. The file provided must contain atleast 10 records with data as shown below:
The contents of the file is integer type data as shown below 

abc.txt (filename provided as command line parameter)

       123
       111
       222
       333
       12345
       111
       4321
       909
       199
       911

Once all the content of the file is pushed onto the stack, it is popped out (all the elements) and is printed on the screen
*/

#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

const int MAX = 100;

class Stack
{
    private:
        int top;
        int data[MAX];
    public:
        Stack() { top = -1; }

void push(int x)
        {
    if (top == MAX - 1)
        cout << "Stack Overflow" << endl;
    else
    {
        top++;
        data[top] = x;
    }
}

void pop()
        {
    if (isEmpty())
        cout << "Stack is Empty" << endl;
    else
    {
        cout << "Popped Element is " << data[top] << endl;
        top--;
    }
}

        bool isEmpty()
        {
    return (top == -1);
}
        
void display()
        {
    if (isEmpty())
        cout << "Stack is Empty" << endl;
    else
    {
        for (int i = top; i >= 0; i--)
            cout << data[i] << endl;
    }
}
};



int main(int argc, char *argv[])
{
    Stack s;
    int x;
    ifstream fin;
    fin.open(argv[1]);
    if (!fin)
    {
        cout << "Cannot open file" << endl;
        exit(0);
    }
    while (fin >> x)
        s.push(x);
    fin.close();
    cout << "Stack Elements are: " << endl;
    s.display();
    cout << "Popping out elements..." << endl;
    while (!s.isEmpty())
        s.pop();
    return 0;
}
