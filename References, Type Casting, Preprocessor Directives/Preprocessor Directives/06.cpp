#include<iostream>
using namespace std;
  
#define num 55
   
#if num > 200
   #undef num
   #define num 200
#elif num < 50
   #undef num
   #define num 50
#else
   #undef num
   #define num 100
#endif
  
int main()
{
    cout << num<<endl;
    if(num==200)
    {
        cout<<"num changed in #if block";
    }
    else if (num==50)
    {
        cout<<"num changed in #elif block";
    }
    else
    {
        cout<<"num changed in #else block";
    }
    
    
}
