/*
Anagram numbers
Two numbers are said to be anagrams of each other, if the digits of one can be re-arranged to form the other number. 
In other words, two numbers are said to be anagrams of each other, if they contain exactly the same set of digits.

For example, 121 and 211 are anagrams of each other.
Similary, 5692 and 9526 are anagrams of each other.
Similarly, 3426, 6423, 6432, 2346 and 4326 are anagrams of each other.

Find anagram numbers: Given an array of N numbers, you are expected to find how many of these numbers are anagrams of each other 
(i.e. how many of these contain exactly the same set of digits)

Example 1 -
If the numbers are {89017, 12321, 56780, 32112, 31221, 52315, 31122}, 
the output should be 4 because four numbers (12321, 32112, 31221, and 31122) are anagrams of each other.

Example 2 -
If the numbers are {121, 102, 205, 136, 112, 921, 911, 431, 211, 456, 779), 
the output should be 3 because three numbers (121, 112 and 211) are anagrams of each other.

Note 1: If none of the numbers form anagrams, the output should be -1.

Note 2: You can assume that all the numbers in the given array will be of the same length.

Note 3: You can assume that the array will contain EITHER no anagrams OR only one set of numbers that are anagrams.

Note 4: The array will contain at least two numbers and can contain a maximum of 50 numbers.
*/

#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>

using namespace std;

int findAnagrams (int input1[], int input2) {
    // Read only region end
    // Write code and remove the below exception.
    // throw "Function findAnagrams (int input1 [],int input2) no vectorcint> arr;
    
    vector<int> arr;
    for (int i=0; i<input2; i++) {
        arr.push_back(input1[i]);
    }
    
    vector<string> arr2;
    string str="";
    int count=0;
    
    for (int i=0; i<arr.size(); i++) {
        stringstream ss; 
        ss<<arr[i];
        string numStr = ss.str();
        sort(numStr.begin(), numStr.end()); 
        arr2.push_back(numStr);
    }
    
    int flag=0;
    
    for (int i=0; i<arr2.size(); ++i) {
        for(int j=i+1; j<arr.size(); ++j) {
            if (arr2[i]==arr2[j]) {
                str = arr2[i];
                flag = 1;
                break;
            }
        }
        if (flag==1) {
            break;
        }
    }

    for (int i=0; i<arr2.size(); ++i) {
        if (str == arr2[i]) {
            count++;
        }
    }
    
    if (count <= 0) {
        return -1;
    }
    return count;
}


int main() {
    int arr[11] = {121, 102, 205, 136, 112, 921, 911, 431, 211, 456, 779};
    cout<<findAnagrams(arr, 11);
}
