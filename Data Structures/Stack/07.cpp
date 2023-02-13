/*
Write a program which accepts a C syntax regular expression string or function call statement string as input.

Your program must check and confirm if the string is complete or not.

A string is said to be complete if it satisfies the below cases 
      CASE 1: number of open braces (, {, [ is equal to the number of close braces 
      CASE 2: number of open quotes " or ' is equal to the number of close quotes

Example 1: 
Enter a C syntax expression
 printf("Hello World")
 
Expected Output:
 The entered string is complete 
 
Example 2: 
Enter a C syntax expression
 printf("Hello World)

Expected Output:
 The entered string is incomplete 

Example 3:
Enter a C syntax expression
 printf("Hello World"

Expected Output:
 The entered string is incomplete
*/

#include <iostream>
using namespace std;

bool isComplete(string str) {
    int openBraces = 0, openQuotes = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '(')
            openBraces++;
        else if (str[i] == ')')
            openBraces--;
        else if (str[i] == '{') 
            openBraces++;
        else if (str[i] == '}') 
            openBraces--;
        else if (str[i] == '[')
             openBraces++;
        else if (str[i] == ']') 
            openBraces--;    
        else if (str[i] == '\"')
            openQuotes++;
        else if (str[i] == '\'')
            openQuotes++;
    }
    return (openBraces == 0) && (openQuotes % 2 == 0);
}

int main() {
    string str;
    cout << "Enter a C syntax expression: ";
    getline(cin, str);
    if (isComplete(str))
        cout << "The entered string is complete." << endl;
    else
        cout << "The entered string is incomplete." << endl;
    return 0;
}
