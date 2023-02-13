#include <iostream> 
#include <set> 
#include <iterator> 

using namespace std; 

int main() 
{ 
    
    set <int> s;         

    // insert elements in random order 
    s.insert(40); 
    s.insert(30); 
    s.insert(60); 
    s.insert(20); 
    s.insert(50); 
    s.insert(50); // only one 50 will be added to the set 
    s.insert(10); 

    // Traversing set using begin() and end()
    cout << "The set s is :"; 
    for (auto itr = s.begin(); itr != s.end(); ++itr) 
    { 
        cout << " " << *itr; 
    } 
    cout << endl; 
    return 0; 
} 
