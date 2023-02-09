#include<stdio.h>
#include<string.h>

bool isPrime(int n) {
    for (int i=2; i<n; i++) {
        if (n%i==0) {
            return false;
        }
    }
    return true;
}

int sumOfNonPrimeIndexValues(int input1[], int input2) {
    // Write code here
    int sum = input1[0]+ input1[1];
    for(int i=2; i<input2; i++) {
        if (!isPrime(i)) {
            sum  += input1[i];
        }
    }
    return sum;
}
