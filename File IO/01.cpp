#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void read()
{
    ifstream in;
    string str;
    in.open("student_unformatted.txt");
    while(in.eof()==0)
    {
        getline(in,str);
        cout<<str<<endl;
    }
    
}
int main()
{
    read();
    return 0;
}
