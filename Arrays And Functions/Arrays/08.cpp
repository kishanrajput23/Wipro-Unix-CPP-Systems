#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int> arr = {5,3,2,6,4};
    int n = arr.size();
    
    cout<<"The minimum element is : "<<*min_element(arr.begin(), arr.end());

    return 0;
}
