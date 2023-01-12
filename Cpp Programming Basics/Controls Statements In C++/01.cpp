#include <iostream>

using namespace std;

int main()
{
    int t, hour, min, sec;
    cout<<"Enter the time in seconds ";
    cin>>t;
    
    hour = t/3600;
    
    t = t%3600;
    min = t/60;
    
    t = t%60;
    sec = t;
    
    cout<<"Time is "<<hour<<" hrs "<<min<<" minutes "<<sec<<" seconds";
}