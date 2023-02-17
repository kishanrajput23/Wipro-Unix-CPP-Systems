#include<stdio.h>
#include<string.h>

bool isPrime(int n) {
    bool answer = true;
    for (int i=2; i<n; i++) {
        if (n%i==0) {
            answer = false;
        }
    }
    return answer;
}

int NthPrime(int input1) {
    int num=1, count = 0;
    while (true) {
        num++;
        if (isPrime(num)) { 
            count++;
            }
        if(count==input1) {
            return num;
            break;
        }
    }
    
    throw "Function NthPrime(int input1) not implemented. ";
}