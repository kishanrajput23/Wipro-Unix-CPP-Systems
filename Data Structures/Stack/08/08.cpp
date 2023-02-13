/*
 Write a program which accepts a data file as command line input from the user
The data file must contain C syntax regular expression strings or function call statement strings as shown below: 

Example data file: 
abc.txt   (filename provided as command line parameter)
  
  printf("Hello"
  scanf("%d , &x)
  add(x, y) 
  mydata()
  x = (a + b)
  (*ptr ++
  printf"hello Wipro")

Your program must check and confirm if the strings present in the data file are complete or not.

A string is said to be complete if it satisfies the below cases 
      CASE 1: number of open braces (, {, [ is equal to the number of close braces 
      CASE 2: number of open quotes " or ' is equal to the number of close quotes

The output for the above mentioned data file must be as given below:

  printf("Hello"  //string incomplete
  scanf("%d , &x)  //string incomplete
  add(x, y)   //string complete
  mydata()   //string complete
  x = (a + b)   //string complete
  (*ptr ++    //string incomplete
  printf"hello Wipro")  //string incomplete
  */

#include <iostream>
#include <fstream>

using namespace std;

bool isComplete(string str) {
    int openBraces = 0, openQuotes = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '(')
            openBraces++;
        else if (str[i] == ')')
            openBraces--;
        else if (str[i] == '\"')
            openQuotes++;
        else if (str[i] == '\'')
            openQuotes++;
    }
    return (openBraces == 0) && (openQuotes % 2 == 0);
}

int main(int argc, char* argv[]) {
    if (argc < 2) {
        cout << "Error: Please provide the data file name as command line argument." << endl;
        return 0;
    }
    string filename = argv[1];
    ifstream file(filename);
    if (!file.is_open()) {
        cout << "Error: Could not open file '" << filename << "'." << endl;
        return 0;
    }
    string line;
    while (getline(file, line)) {
        cout << line << "  //";
        if (isComplete(line))
            cout << "string complete" << endl;
        else
            cout << "string incomplete" << endl;
    }
    file.close();
    return 0;
}
