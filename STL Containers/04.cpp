#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    list<int> demoList;
    demoList.push_back(10);
    demoList.push_back(20);
    demoList.push_back(30);
    demoList.push_back(40);
    cout << "Initial List: ";
    for (auto itr = demoList.begin(); itr != demoList.end(); itr++)
        cout << *itr << " ";
    demoList.reverse();
    cout << "\n\nList after reversing: ";
    for (auto itr = demoList.begin(); itr != demoList.end(); itr++)
        cout << *itr << " ";
 
    return 0;
}

