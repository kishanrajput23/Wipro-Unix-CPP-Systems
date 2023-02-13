/*
Implement a stack with operations push() and pop()

Accept a string input from the user (can be multi word string also). 

Each character of the entered string must be pushed onto a stack using the push() function. 
Once all characters are pushed onto the stack they are popped out using the pop() function and the reverse string is 
printed back on the screen.

 Example1: 
  Enter a string 
  hello

  Expected Output 
  olleh

 Example2:
  Enter a string 
  welcome to WIPRO

  Expected Output 
  ORPIW ot emoclew
  */

 #include<iostream>
 
using namespace std;
#define MAX 1000 

// Declaring a stack
char stack[MAX];
int top = -1;

// Function to push elements into the stack
void push(char c)
{
    if(top >= MAX-1)
    {
        cout<<"Stack Overflow";
    }
    else
    {
        top++;
        stack[top] = c;
    }
}

// Function to pop elements from the stack
char pop()
{
    if(top == -1)
    {
        cout<<"Stack Underflow";
        return -1;
    }
    else
    {
        char c = stack[top];
        top--;
        return c;
    }
}

int main()
{
    string s;
    cout<<"Enter a string: ";
    getline(cin,s);
    int n = s.length();

    for(int i=0; i<n; i++)
    {
        push(s[i]);
    }
    cout<<"Reverse string: ";
    for(int i=0; i<n; i++)
    {
        char c = pop();
        cout<<c;
    }
    return 0;
}
