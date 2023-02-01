#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream input( "filename.txt" );
    int flag=0;
    fstream even,odd;
    even.open("even.txt"); 
    odd.open("odd.txt"); 
    for(string line; getline( input, line ); )
    {
        if(flag==0)
        {
            odd<<line<<endl;
            flag=1;
        }
        else
        {
            even<<line<<endl;
            flag=0;
        }
    }
    even.close();
    odd.close();
    return 0;
}
