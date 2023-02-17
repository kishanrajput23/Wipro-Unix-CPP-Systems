/*
Question : Calculate sum of prime index values in an array

Example 1 : if array elements are

input1[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
input2 = 10;
Output : 210

Explanation : The values of prime indexes are 30, 40, 60, 80 and their sum is 210


Example 2 : if array elements are

input1[] = {-1, -2, -3, 3, 4, -7};
input2 = 6;
Output : -7


Example 3 : if array elements are

input1[] = {-4, 5};
input2 = 2;
Output : 0
*/

#include<iostream>
#include<algorithm>
using namespace std;

bool isPrime(int n) {
    for (int i=2; i<n; i++) {
        if (n%i == 0) {
            return false;
        }
    }
    return true;
}

int main() {

    int input1[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int input2 = 10;

    int sum = 0;
    for(int i=2; i<input2; i++) {
        if (isPrime(i)) {
            sum += input1[i];
        }
    }
    cout<<"Sum is : "<<sum<<endl;

    return 0;
}