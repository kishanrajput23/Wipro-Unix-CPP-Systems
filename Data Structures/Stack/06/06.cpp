/*
 Implement a stack with operations push() and pop()

Data to be pushed onto the stack is read from a data file and the file name is passed as a command line argument to your program. The file provided must contain atleast 10 records with data as shown below:

abc.txt   (filename provided as command line parameter)
 hello
 world
 welcome
 to
 wipro
 kodc
 campus
 is
 beautiful
 kochi
 is
 gods
 own
 country
 
The data file comprises of a collection of strings. 
Each character of each string must be pushed onto the stack separately. Once all the characters are 
pushed onto the stack, start to pop them out. 
When you pop them, print each reversed string on the screen. The reversed strings must also be written back into the data file. 

The output must for the above data file input must be 
 
 yrtnuoc
 nwo
 sdog
 si
 ihcok
 lufituaeb
 si
 supmac
 cdok
 orpiw
 ot
 emoclew
 olleh
 */

#include<iostream>
#include<stack>
#include<fstream>
#include<string>

using namespace std;

int main(int argc, char* argv[]) {
    stack<char> stk;
    string line;
    ifstream infile(argv[1]);
    ofstream outfile(argv[1], ios::app);
    while(getline(infile, line)) {
        for(int i=0; i<line.length(); i++) {
            stk.push(line[i]);
        }
        while(!stk.empty()) {
            outfile << stk.top();
            cout << stk.top();
            stk.pop();
        }
        outfile << endl;
        cout << endl;
    }
    infile.close();
    outfile.close();
    return 0;
}
