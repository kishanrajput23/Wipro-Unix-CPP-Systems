#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main () {
    string str;
    cout<<"Enter string to find: "<<endl;  
    cin>>str;
    
    ifstream file_text ("s1.txt");
    string x;   
    bool ans=false; 
    int line=1; 
    if (file_text.is_open()) {
        while (getline(file_text,x)) {
            if (x.find(str, 0) != string::npos) {
                cout<<"string found in line: "<<line<<endl;
                ans=true;
              }
            line++;
          }
        file_text.close(); 
    }
    else {
        cout << "Unable to open file";   
  }

  if (!ans) {
  cout<<"string is not found"<<endl;
  }
  return 0;
}