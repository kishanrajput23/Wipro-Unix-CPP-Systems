/*
Implement a stack with operations push() and pop()

push() will push data onto the stack. 
pop() will remove data from the stack. The data retrieved from the stack must be returned to the calling function

Data to be pushed onto the stack is read from a file and the file name is passed as a command line argument to your program. The file provided must contain atleast 10 records.
The contents of the file is a combination of integer, string and integer type data (which is single space 
separated) as shown below 

abc.txt (filename provided as command line parameter)

       123 hello 321
       111 aaa 221
       222 bbb 432
       333 ooo 010
       12345 bab 090
       111 mem 878
       4321 coo 091
       909 nan 342
       199 pos 555
       911 sap 434

Once all the content of the file is pushed onto the stack, it is popped out (all the elements)  and returned to the calling function and is printed in the calling function.
*/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;

const int MAX = 100;

struct Node
{
    int num1;
    string str;
    int num2;
};

class Stack
{
    private:
        int top;
        Node data[MAX];
    public:
        Stack() { top = -1; }
        void push(Node x);
        Node pop();
        bool isEmpty();
};

void Stack::push(Node x)
{
    if (top == MAX - 1)
        cout << "Stack Overflow" << endl;
    else
    {
        top++;
        data[top] = x;
    }
}

Node Stack::pop()
{
    if (isEmpty())
    {
        cout << "Stack is Empty" << endl;
        Node empty = {0, "", 0};
        return empty;
    }
    else
    {
        Node item = data[top];
        top--;
        return item;
    }
}

bool Stack::isEmpty()
{
    return (top == -1);
}

void printNode(Node n)
{
    cout << n.num1 << " " << n.str << " " << n.num2 << endl;
}

int main(int argc, char *argv[])
{
    Stack s;
    Node x;
    ifstream fin;
    fin.open(argv[1]);
    if (!fin)
    {
        cout << "Cannot open file" << endl;
        exit(0);
    }
    while (fin >> x.num1 >> x.str >> x.num2)
        s.push(x);
    fin.close();
    cout << "Popping out elements..." << endl;
    while (!s.isEmpty())
    {
        x = s.pop();
        printNode(x);
    }
    return 0;
}
