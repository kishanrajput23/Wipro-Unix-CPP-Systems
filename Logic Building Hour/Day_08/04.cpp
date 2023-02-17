#include<iostream>
#include<string.h>

int EvenOddDigitsSum(int input1, char* input2) {
	// Write code here
    int count = strlen(input2);

    if (count==4) {
        int sum = 0;
        while (input1>0) {
            int rem = input1%10;
            if (rem%2==0) {
                sum += rem;
            }
            input1/=10;
        }
        return sum;
    }

    else {
        int sum = 0;
        while (input1>0) {
            int rem = input1%10;
            if (rem%2!=0) {
                sum += rem;
            }
            input1/=10;
        }
        return sum;
    } 
    return 0;
}