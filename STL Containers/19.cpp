#include <iostream>
#include <iterator>
#include <set> 
using namespace std;

int main()
{
unordered_set<int> A={12,45,78,12,54,67,85,354,854,34,23,56,12,45,78};
unordered_set<int> B={12,45,76,1,3,45,67,89,34,54};
unordered_set<int> C;
for (auto itr = A.begin(); itr != A.end(); ++itr) 
    C.insert(*itr);
for (auto itr = B.begin(); itr != B.end(); ++itr) 
    C.insert(*itr);
    cout<<"Union"<<endl;
for (auto itr = C.begin(); itr != C.end(); ++itr) 
    cout<<*itr<<" ";
    cout<<endl;
    
    
    cout<<"Intersection"<<endl;
    for (auto itr = B.begin(); itr != B.end(); ++itr)
    {
        if(A.find(*itr) != s.end())
        {
            cout<<*itr<<" ";
        }
    }
    
    cout<<"A-B"<<endl;
    for (auto itr = B.begin(); itr != B.end(); ++itr)
    {
        if(A.find(*itr) != s.end())
        {
            cout<<*itr<<" ";
        }
    }
    
    
    cout<<"B-C"<<endl;
    for (auto itr = A.begin(); itr != A.end(); ++itr)
    {
        if(B.find(*itr) != s.end())
        {
            cout<<*itr<<" ";
        }
    }
}
