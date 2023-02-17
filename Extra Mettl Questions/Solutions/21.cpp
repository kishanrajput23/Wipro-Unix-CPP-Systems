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

int countPrimesInRange(int input1, int input2) {
    int count = 0;
    for (int i=input1; i<=input2; i++) {
        if (isPrime(i)) {
            count+=1;
        }
    }
    return count;
    throw "Function countPrimesInRange(int input1,int input2) not implemented. ";
}
