#include<math.h>

int sumOfPowerOfDigits(int input1) {
    	// Write code and remove the below exception.
    int rev = 0;
    while(input1>0) {
        int rem = input1%10;
        rev = rev*10 + rem;
        input1/=10;
    }

    int sum = 0;
    while (rev>0) {
        int rem = rev%10;
        rev /= 10;
        int q = rev%10;
        sum += pow(rem, q);
    }
    return sum;
    throw "Function sumOfPowerOfDigits(int input1) not implemented. ";
}