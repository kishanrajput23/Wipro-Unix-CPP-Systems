/*
Question : Find sum of all prime numbers in the array, except the smallest prime number

Example 1 : if array elements are

input1[] = {10, 41, 18, 50, 43, 31, 29, 25, 59, 96, 67};
input2 = 11;
Output : 241

Explanation : The prime numbers in above array are 41, 43, 31, 29, 59 and 67
The smallest prime number is 29.
So, let us leave 29 and add all the other prime numbers.
So, output = 41 + 43 + 31 + 59 + 67 = 241 


Example 2 : if array elements are

input1[] = {10, 20, 30, 40};
input2 = 4;
Output : 90

Explanation : If the array does not contain any prime numbers then output should be the sum
of all numbers present in the array except the lowest number.

The smallest prime number is 10.
So, let us leave 10 and add all the other prime numbers.
So, output = 20 + 30 + 40 = 90
*/

#include<iostream>
#include<algorithm>
using namespace std;

bool isPrime(int n) {
    for (int i=2; i<n; i++) {
        if (n%i ==0) {
            return false;
        }
    }
    return true;
}

int main() {

    int input1[] = {10, 41, 18, 50, 43, 31, 29, 25, 59, 96, 67};
    int input2 = 11;
    int flag=0;
    for (int i=0; i<input2; i++) {
        if (isPrime(input1[i])) {
            flag = 1;
            break;
        }
    }

    if (flag==0) {
        int arr1[input2];
        copy(input1, input1+input2, arr1);
        sort(arr1, arr1+input2);
        int sum=0;
        for (int i=1; i<input2; i++) {
            sum += arr1[i];
        }
        cout<<"Sum is : "<<sum<<endl;
    }

    else {
        int arr2[input2];
        int k=0;
        for (int i=0; i<input2; i++) {
            if (isPrime(input1[i])) {
                arr2[k] = input1[i];
                k++;
            }
        }
        sort(arr2, arr2+k);
        int sum=0;

        for(int i=1; i<k; i++) {
            sum += arr2[i];
        }

        cout<<"Sum is : "<<sum<<endl;
    }

    return 0;
}