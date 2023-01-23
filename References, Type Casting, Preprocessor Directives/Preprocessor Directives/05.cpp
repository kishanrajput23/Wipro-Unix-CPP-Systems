#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#define DEBUG
void add()
{
    #ifdef DEBUG
    {
        cout<<"DEBUG PRINT - "<<__FUNCTION__<<" and line no. "<<__LINE__<<endl;
    }
    #endif 
}
int main()
{
    add();
    #ifdef DEBUG
    {
        cout<<"DEBUG PRINT - "<<__FUNCTION__<<" and line no. "<<__LINE__<<endl;
    }
    #endif 
}

