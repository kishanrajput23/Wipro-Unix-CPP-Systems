#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 

    // initialize container 
    multimap<string, string> mp; 
    // insert elements in random order 
    mp.insert({ "date", "an appointmet to meed someone" }); 
    mp.insert({ "digit", "number" }); 
    mp.insert({ "happy", "a feelin of joy" }); 
    mp.insert({ "happy", "NOTHING" }); 
    mp.insert({ "date", "a perticular day" }); 

    // Stores the range of key s 
    string s="happy";
    auto it = mp.equal_range(s); 

    cout << "The multimap elements of key "<<s<<" is : \n"; 
    cout << "KEY\tELEMENT\n"; 

    // Prints all the elements of key s 
    for (auto itr = it.first; itr != it.second; ++itr) { 
        cout << itr->first 
            << '\t' << itr->second << '\n'; 
    } 
    return 0; 
} 

