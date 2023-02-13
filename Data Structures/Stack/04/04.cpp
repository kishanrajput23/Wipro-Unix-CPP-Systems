/*
 Implement stack with operations push() and pop()

push() will push an element onto the stack. 
pop() will remove the element from the stack. 

Data to be pushed onto the stack is read from a file and the file name is passed as a command line argument to your program. The file provided must contain atleast 10 records.
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

Once all the content of the file is pushed onto the stack, it is popped out (all the elements). 
As the element is popped, you must check if the element is even or odd. It the popped element is  an even number, the element is pushed onto an EVEN stack and if the element is odd number it is pushed onto an ODD stack. 

EVEN and ODD stacks are 2 additional stacks which holds even and odd elements respectively.

Once data is pushed onto these stacks, it is popped out again and even and odd elements are printed 
sequentially.
*/

#include<iostream>
#include<fstream>
#include<stack>

using namespace std;

void pushToStack(stack<int> &s, int num) {
    s.push(num);
}

int popFromStack(stack<int> &s) {
    int top = s.top();
    s.pop();
    return top;
}

int main(int argc, char* argv[]) {
    stack<int> mainStack, evenStack, oddStack;
    int num;

    ifstream inputFile;
    inputFile.open(argv[1]);

    while (inputFile >> num) {
        pushToStack(mainStack, num);
    }
    inputFile.close();

    while (!mainStack.empty()) {
        int popped = popFromStack(mainStack);
        if (popped % 2 == 0) {
            pushToStack(evenStack, popped);
        }
        else {
            pushToStack(oddStack, popped);
        }
    }

    cout << "Even elements: ";
    while (!evenStack.empty()) {
        cout << popFromStack(evenStack) << " ";
    }
    cout << endl;

    cout << "Odd elements: ";
    while (!oddStack.empty()) {
        cout << popFromStack(oddStack) << " ";
    }
    cout << endl;

    return 0;
}
