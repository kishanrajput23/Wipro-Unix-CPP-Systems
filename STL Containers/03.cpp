#include<iostream>
#include<vector>
#include<cctype>
using namespace std;
int main(){
	 vector<int> k;
    // vector<int> b;
    for (int i = 1; i <= 10; i++)
        k.push_back(i);
 
    cout << "Enter numbers are: ";
    for (auto i = k.begin(); i != k.end(); ++i)
        cout << *i << " ";
        cout << "\nTwice of numbers are: ";
    for (auto i = k.begin(); i != k.end(); ++i)
        cout <<(*i)*2<< " ";
}
