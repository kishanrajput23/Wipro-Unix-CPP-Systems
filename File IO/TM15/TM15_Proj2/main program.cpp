#include <iostream>
#include<fstream>
#include<cstring>

using namespace std;

int main(int argc,char *argv[])
{
    string c=" ";
    int i=1;
    if(argc==5)
    {
        c="";
        c+=argv[1][2];
        i=2;
    }
    ifstream file1(argv[i]);
    i++;
    ifstream file2(argv[i]);
    i++;
    fstream file3(argv[i]);
    string line;
    while(!file1.eof())
    {
        file1>>line;
        file3<<line;
        file3<<c;
        file2>>line;
        file3<<line<<endl;
    }
    return 0;
}
