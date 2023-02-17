/*
Question : Is Emirp Number?

Note : A prime number which results in different prime number, after reversing 
those numbers are called an Emirp Numbers.

Example 1 : if array elements are

input1[] = {1, 13, 2, 31, 17};
input2 = 5;
Output : 3

Explanation : 13 is prime number and 31 is also prime number. Hence 13 is an Emirp Number.
Similarly, 31 is prime number and 13 is also prime number. Hence 31 is an Emirp Number.
Lastly, 17 is prime number and 71 is also prime number. Hence 17 is an Emirp Number.
Hence, the total count is 3 therefore output is also 3.
*/

#include<iostream>
using namespace std;

bool isPrime(int n) {
    if (n==0 || n==1) {
        return false;
    }
    for (int i=2; i<n; i++) {
        if (n%i ==0) {
            return false;
        }
    }
    return true;
}

int main() {
    int input1[] = {1, 13, 2, 31, 17};
    int input2=5;

    int count = 0;
    for (int i=0; i<input2; i++) {
        if (isPrime(input1[i]) && input1[i]>9) {
            int num = input1[i];
            int rev = 0;
            while (num>0) {
                int rem = num%10;
                rev = rev*10 + rem;
                num /= 10;
            }

            if (isPrime(rev)) {
                count+=1;
            }
        }
    }
    cout<<"Count is : "<<count<<endl;
    return 0;
}